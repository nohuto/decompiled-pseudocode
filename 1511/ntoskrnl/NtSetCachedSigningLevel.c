/*
 * XREFs of NtSetCachedSigningLevel @ 0x1403B5004
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetCachedSigningLevel(char a1, char a2, char *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r13
  char v8; // bl
  _QWORD *PoolWithTag; // rdi
  char v10; // r14
  SIZE_T v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  _KPROCESS *Process; // rdx
  char v18; // dl
  char v19; // [rsp+40h] [rbp-28h]
  char PreviousMode; // [rsp+41h] [rbp-27h]

  v5 = a4;
  v8 = a1;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( !qword_1402DBDC8 )
  {
    v15 = -1073741823;
    goto LABEL_22;
  }
  if ( (a2 & 0x30) != 0 )
    goto LABEL_28;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_26;
  if ( (a1 & 6) == 0 && a2 )
  {
LABEL_28:
    v15 = -1073741584;
    goto LABEL_22;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_31;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode != 1 )
  {
    if ( (a1 & 1) != 0 )
    {
      v10 = 15;
      goto LABEL_9;
    }
    if ( (a1 & 2) != 0 )
    {
      v10 = 8;
      goto LABEL_9;
    }
LABEL_31:
    v15 = -1073741585;
    goto LABEL_22;
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_31;
  v8 = a1 | 1;
  if ( (a1 & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v19 = BYTE1(Process[2].SwapListEntry.Next);
    if ( (BYTE2(Process[2].SwapListEntry.Next) & 7) != 1 )
    {
      v15 = -1073741790;
      goto LABEL_22;
    }
    v18 = (__int64)Process[2].SwapListEntry.Next & 0xF;
    v10 = v19 & 0xF;
    if ( (unsigned __int8)v18 < (unsigned __int8)(v19 & 0xF) )
      v10 = v18;
  }
LABEL_9:
  v11 = 8LL * a4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x63734943u);
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_22;
  }
  if ( PreviousMode == 1 && v11 )
  {
    if ( ((unsigned __int8)a3 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a3[v11] > MmUserProbeAddress || &a3[v11] < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(PoolWithTag, a3, 8 * v5);
  if ( (v8 & 6) == 0 )
    goto LABEL_21;
  if ( (_DWORD)v5 != 1 )
  {
LABEL_26:
    v15 = -1073741582;
    goto LABEL_22;
  }
  if ( a5 == *PoolWithTag )
  {
LABEL_21:
    LOBYTE(v14) = v10;
    LOBYTE(v13) = a2;
    LOBYTE(v12) = PreviousMode;
    v15 = qword_1402DBDC8(v8 & 7, v12, v13, v14, PoolWithTag, v5, a5);
    goto LABEL_22;
  }
  v15 = -1073741581;
LABEL_22:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v15;
}
