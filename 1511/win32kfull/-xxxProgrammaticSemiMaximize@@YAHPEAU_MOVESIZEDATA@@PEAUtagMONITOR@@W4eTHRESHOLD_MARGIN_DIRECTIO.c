/*
 * XREFs of ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209E38
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0207A2C (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 */

__int64 __fastcall xxxProgrammaticSemiMaximize(__int64 a1, __int16 *a2, int a3)
{
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v6; // rcx
  struct tagCHECKPOINT *Prop; // r8
  int v8; // ecx
  struct tagWND *v9; // rcx
  struct tagCHECKPOINT *v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  v10 = 0LL;
  v4 = 36;
  result = xxxForceSizeRecToDockTarget((struct _MOVESIZEDATA *)a1, a3, a2, &v12, (struct tagRECT *)v11, &v10);
  if ( (_DWORD)result )
  {
    if ( (v12 & 1) != 0 )
    {
      Prop = v10;
    }
    else
    {
      v6 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 55LL) & 0x20) == 0 )
      {
LABEL_11:
        v9 = *(struct tagWND **)a1;
        *(_OWORD *)(a1 + 8) = *(_OWORD *)(a1 + 24);
        xxxCommitMoveSize(v9, (struct _MOVESIZEDATA *)a1);
        return 1LL;
      }
      *(_OWORD *)v11 = *(_OWORD *)(a1 + 24);
      Prop = (struct tagCHECKPOINT *)GetProp(v6, (unsigned __int16)atomCheckpointProp, 1LL);
      *((_DWORD *)Prop + 8) &= ~2u;
    }
    *((_DWORD *)Prop + 8) ^= (*((_DWORD *)Prop + 8) ^ (32 * (*(_BYTE *)(*(_QWORD *)a1 + 289LL) & 1))) & 0x20;
    *((_DWORD *)Prop + 8) ^= (*((_DWORD *)Prop + 8) ^ (((*(unsigned __int8 *)(*(_QWORD *)a1 + 289LL) >> 1) & 1) << 6)) & 0x40;
    v8 = *(_DWORD *)(a1 + 316);
    if ( (v8 & 4) != 0 )
      v4 = 164;
    if ( (v8 & 0x20) != 0 )
      v4 |= 0x40u;
    xxxMinMaximizeEx(*(struct tagWND **)a1, 9u, v4, 0LL, v11);
    goto LABEL_11;
  }
  return result;
}
