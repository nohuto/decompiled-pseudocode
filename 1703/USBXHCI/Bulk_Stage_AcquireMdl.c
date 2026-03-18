/*
 * XREFs of Bulk_Stage_AcquireMdl @ 0x1C0001260
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000BE40 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDqq @ 0x1C000CB5C (WPP_RECORDER_SF_DDDqq.c)
 */

__int64 __fastcall Bulk_Stage_AcquireMdl(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned int v3; // esi
  __int64 v4; // r14
  struct _MDL *v5; // rbx
  unsigned int i; // edx
  unsigned int ByteCount; // eax
  ULONG v8; // r12d
  char *v9; // r15
  struct _MDL *Mdl; // rax
  int v11; // r8d
  int v12; // edx
  int Irp; // [rsp+20h] [rbp-48h]

  v1 = *a1;
  v3 = 0;
  v4 = *(_QWORD *)(*a1 + 40);
  v5 = *(struct _MDL **)(*a1 + 64);
  for ( i = *(_DWORD *)(*a1 + 96); ; i -= ByteCount )
  {
    ByteCount = v5->ByteCount;
    if ( i < ByteCount )
      break;
    v5 = v5->Next;
  }
  if ( i )
  {
    v8 = v5->ByteCount - i;
    v9 = (char *)v5->StartVa + v5->ByteOffset + i;
    Mdl = IoAllocateMdl(v9, v8, 0, 0, 0LL);
    a1[6] = (__int64)Mdl;
    if ( Mdl )
    {
      *((_BYTE *)a1 + 44) = 1;
      IoBuildPartialMdl(v5, Mdl, v9, v8);
      *(_QWORD *)a1[6] = v5->Next;
    }
    else
    {
      v12 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_DDDqq(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        v12,
        v11,
        27,
        Irp,
        *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
        *(_DWORD *)(v4 + 64),
        *(_QWORD *)(v1 + 24),
        (char)a1);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    a1[6] = (__int64)v5;
  }
  return v3;
}
