/*
 * XREFs of Isoch_Stage_AcquireMdl @ 0x1C0026800
 * Callers:
 *     Isoch_PrepareStage @ 0x1C00252B4 (Isoch_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1C0023F38 (WPP_RECORDER_SF_DDqq.c)
 */

__int64 __fastcall Isoch_Stage_AcquireMdl(__int64 *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebp
  unsigned int v4; // edx
  __int64 v5; // r15
  struct _MDL *v6; // rbx
  unsigned int ByteCount; // eax
  ULONG v8; // r12d
  char *v9; // r14
  struct _MDL *Mdl; // rax
  __int64 v11; // r8

  v1 = *a1;
  v2 = 0;
  v4 = *(_DWORD *)(*a1 + 72) + *(_DWORD *)(*a1 + 76);
  v5 = *(_QWORD *)(*a1 + 40);
  v6 = *(struct _MDL **)(*a1 + 56);
  while ( 1 )
  {
    ByteCount = v6->ByteCount;
    if ( v4 < ByteCount )
      break;
    v6 = v6->Next;
    v4 -= ByteCount;
  }
  if ( v4 )
  {
    v8 = v6->ByteCount - v4;
    v9 = (char *)v6->StartVa + v6->ByteOffset + v4;
    Mdl = IoAllocateMdl(v9, v8, 0, 0, 0LL);
    a1[8] = (__int64)Mdl;
    if ( Mdl )
    {
      *((_BYTE *)a1 + 56) = 1;
      IoBuildPartialMdl(v6, Mdl, v9, v8);
      *(_QWORD *)a1[8] = v6->Next;
    }
    else
    {
      WPP_RECORDER_SF_DDqq(
        *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
        2u,
        v11,
        0x2Du,
        (__int64)&WPP_1085b84f9451ac90e0467fe3bd281904_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
        *(_QWORD *)(v1 + 24),
        a1);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    a1[8] = (__int64)v6;
  }
  return v2;
}
