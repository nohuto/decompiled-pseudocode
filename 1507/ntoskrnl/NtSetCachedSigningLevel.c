/*
 * XREFs of NtSetCachedSigningLevel @ 0x14058CEF8
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetCachedSigningLevel(char a1, char a2, char *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r13
  char v8; // bl
  _QWORD *PoolWithTag; // rdi
  char v10; // r14
  _KPROCESS *Process; // rdx
  unsigned int v12; // ebx
  char v14; // dl
  SIZE_T v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // [rsp+40h] [rbp-28h]
  char PreviousMode; // [rsp+41h] [rbp-27h]

  v5 = a4;
  v8 = a1;
  PoolWithTag = 0LL;
  v10 = 0;
  if ( !qword_14032C128 )
  {
    v12 = -1073741823;
    goto LABEL_12;
  }
  if ( (a2 & 0x30) != 0 )
    goto LABEL_17;
  if ( a4 - 1 > 0xFFF )
    goto LABEL_39;
  if ( (a1 & 6) == 0 && a2 )
  {
LABEL_17:
    v12 = -1073741584;
    goto LABEL_12;
  }
  if ( (a1 & 3) == 3 )
    goto LABEL_15;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 2) == 0 )
    {
      v8 = a1 | 1;
      if ( (a1 & 4) == 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v19 = BYTE1(Process[2].ReadyListHead.Blink);
        if ( (BYTE2(Process[2].ReadyListHead.Blink) & 7) != 1 )
        {
          v12 = -1073741790;
          goto LABEL_12;
        }
        v14 = (__int64)Process[2].ReadyListHead.Blink & 0xF;
        v10 = v19 & 0xF;
        if ( (unsigned __int8)v14 < (unsigned __int8)(v19 & 0xF) )
          v10 = v14;
      }
      goto LABEL_25;
    }
LABEL_15:
    v12 = -1073741585;
    goto LABEL_12;
  }
  if ( (a1 & 1) != 0 )
  {
    v10 = 15;
  }
  else
  {
    if ( (a1 & 2) == 0 )
      goto LABEL_15;
    v10 = 8;
  }
LABEL_25:
  v15 = 8LL * a4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x63734943u);
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_12;
  }
  if ( PreviousMode == 1 && v15 )
  {
    if ( ((unsigned __int8)a3 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a3[v15] > MmUserProbeAddress || &a3[v15] < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(PoolWithTag, a3, 8 * v5);
  if ( (v8 & 6) == 0 )
  {
LABEL_38:
    LOBYTE(v18) = v10;
    LOBYTE(v17) = a2;
    LOBYTE(v16) = PreviousMode;
    v12 = qword_14032C128(v8 & 7, v16, v17, v18, PoolWithTag, v5, a5);
    goto LABEL_12;
  }
  if ( (_DWORD)v5 == 1 )
  {
    if ( a5 != *PoolWithTag )
    {
      v12 = -1073741581;
      goto LABEL_12;
    }
    goto LABEL_38;
  }
LABEL_39:
  v12 = -1073741582;
LABEL_12:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x63734943u);
  return v12;
}
