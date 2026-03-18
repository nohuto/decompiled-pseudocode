/*
 * XREFs of ?_PreVerify@CDS_JOURNAL@CCD_BTL@@CAJAEBU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00D96F0
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B94FC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ConvertGdiScalingToDMMScaling @ 0x1C00D9768 (ConvertGdiScalingToDMMScaling.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::_PreVerify(
        const struct _D3DKMT_AUGMENT_CDSJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  char v15; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 2) != 0 )
    return 0LL;
  v5 = (unsigned int *)*((_QWORD *)a1 + 4);
  v6 = v5[18];
  if ( (v6 & 0x80u) == 0LL || (v7 = v5[21]) == 0 || (v11 = v7 - 1) == 0 || (v12 = v11 - 1, (unsigned int)v12 < 2) )
  {
    if ( (v6 & 0x20000000) != 0 && !(unsigned int)ConvertGdiScalingToDMMScaling(v5[22], &v15) )
      return 3221225485LL;
    v8 = *((_QWORD *)a1 + 4);
    if ( (*(_DWORD *)(v8 + 72) & 0x40000) != 0 )
    {
      v9 = *(_DWORD *)(v8 + 168);
      if ( v9 != 32 && v9 != 8 && v9 != 16 && v9 != 24 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdWarning(0x40000LL, v6, a3, a4);
        v13[3] = v8;
        v13[4] = *(unsigned int *)(v8 + 72);
        v14 = *(unsigned int *)(v8 + 168);
        goto LABEL_13;
      }
    }
    return 0LL;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v6, a3, a4);
  v13[3] = v5;
  v13[4] = v5[18];
  v14 = v5[21];
LABEL_13:
  v13[5] = v14;
  WdLogEvent5_WdWarning(v13);
  return 3221225485LL;
}
