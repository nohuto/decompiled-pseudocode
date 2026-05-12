/*
 * XREFs of PortPassThroughMarshalResultsFromSrb @ 0x1C003A6E8
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C003A9FC (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     PortPassThroughApplyNormalizedRequest @ 0x1C003A070 (PortPassThroughApplyNormalizedRequest.c)
 *     PortPassThroughNormalize @ 0x1C003A82C (PortPassThroughNormalize.c)
 */

char __fastcall PortPassThroughMarshalResultsFromSrb(IRP *a1, __int64 a2, char a3, __int64 a4)
{
  int v8; // eax
  int v9; // edi
  unsigned __int64 Length; // r12
  char *v11; // rcx
  unsigned __int8 v12; // si
  __int64 v13; // rdx
  char v14; // al
  unsigned __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  unsigned int v19; // [rsp+40h] [rbp-48h]

  *(_QWORD *)(a4 + 8) = 0LL;
  v8 = PortPassThroughNormalize(&v17, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)a4;
    Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    BYTE2(v17) = *(_BYTE *)(a2 + 4);
    if ( *(char *)(a2 + 3) >= 0 )
    {
      v12 = 0;
      BYTE7(v17) = 0;
    }
    else
    {
      if ( BYTE7(v17) )
        v11 = (char *)a1->AssociatedIrp.MasterIrp + v19;
      else
        v11 = 0LL;
      v12 = *(_BYTE *)(a2 + 11);
      BYTE7(v17) = v12;
      if ( v11 && v12 )
        memmove(v11, *(const void **)(a2 + 32), v12);
      v9 = 0;
    }
    v13 = *(unsigned int *)(a2 + 16);
    v14 = *(_BYTE *)(a2 + 3) & 0x3F;
    HIDWORD(v17) = *(_DWORD *)(a2 + 16);
    if ( v14 == 18 )
      v9 = 0;
    if ( v12 )
    {
      *(_QWORD *)(a4 + 8) = v19 + v12;
    }
    else
    {
      *(_QWORD *)(a4 + 8) = (unsigned __int16)v17;
      if ( v9 < 0 && *(_BYTE *)(a2 + 4) )
      {
        v9 = 0;
        *(_QWORD *)(a4 + 8) = 3LL;
      }
    }
    if ( !a3 && BYTE8(v17) && (_DWORD)v13 && v18 )
      *(_QWORD *)(a4 + 8) = v18 + v13;
    v15 = Length;
    if ( *(_QWORD *)(a4 + 8) < Length )
      v15 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
    LOBYTE(v8) = PortPassThroughApplyNormalizedRequest(&v17, a1);
  }
  *(_DWORD *)a4 = v9;
  return v8;
}
