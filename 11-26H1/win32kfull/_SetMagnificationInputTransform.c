/*
 * XREFs of _SetMagnificationInputTransform @ 0x14023BFDC
 * Callers:
 *     _CancelMagnificationInputTransform @ 0x14023BFA0 (_CancelMagnificationInputTransform.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x140298428 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     AcquireMagInputLock @ 0x140198D88 (AcquireMagInputLock.c)
 *     ReleaseMagInputLock @ 0x140198DD4 (ReleaseMagInputLock.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x140265F38 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ?ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z @ 0x1402CB60C (-ComputeMagnificationFactor@@YAXPEAU_MAGNIFICATION_INPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall SetMagnificationInputTransform(struct _MAGN_INPUT_TRANSFORM *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  int v15; // ecx
  bool v16; // zf
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rdx
  __int64 v31; // rcx
  _OWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // [rsp+20h] [rbp-30h] BYREF
  __int128 v40; // [rsp+30h] [rbp-20h]
  __int128 v41; // [rsp+40h] [rbp-10h]

  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v2 = PtiCurrent((__int64)a1);
  v5 = *((_DWORD *)a1 + 8);
  v6 = v2;
  v7 = *((_QWORD *)v2 + 61);
  if ( !v5 )
  {
    if ( !*(_QWORD *)(v7 + 224) )
    {
      if ( (unsigned int)VerifyMagInputDimensions(a1) )
      {
        v28 = *(_OWORD *)a1;
        *(_QWORD *)&v41 = v6;
        v29 = *((_OWORD *)a1 + 1);
        v39 = v28;
        v40 = v29;
        ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v39);
        AcquireMagInputLock(v31, v30);
        v32 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        *(_QWORD *)(v7 + 224) = v32;
        if ( v32 )
        {
          v37 = v40;
          *v32 = v39;
          v38 = v41;
          v32[1] = v37;
          v32[2] = v38;
          ReleaseMagInputLock(v34, v33);
          v13 = 804;
          goto LABEL_24;
        }
        UserSetLastError(14);
        ReleaseMagInputLock(v36, v35);
      }
      return 0LL;
    }
LABEL_17:
    v15 = 5;
    goto LABEL_18;
  }
  v8 = v5 - 1;
  if ( !v8 || (v9 = v8 - 1) == 0 )
  {
    v14 = *(_QWORD *)(v7 + 224);
    if ( !v14 )
      goto LABEL_10;
    if ( v6 == *(struct tagTHREADINFO **)(v14 + 32) )
    {
      if ( (unsigned int)VerifyMagInputDimensions(a1) )
      {
        v16 = *((_DWORD *)a1 + 8) == 1;
        v17 = *(_QWORD *)(v7 + 224);
        v18 = *(_OWORD *)(v17 + 32);
        v40 = *(_OWORD *)(v17 + 16);
        v19 = *(_OWORD *)a1;
        v41 = v18;
        v39 = v19;
        if ( v16 )
          v40 = *((_OWORD *)a1 + 1);
        ComputeMagnificationFactor((struct _MAGNIFICATION_INPUT_TRANSFORM *)&v39);
        AcquireMagInputLock(v21, v20);
        v22 = *(_OWORD **)(v7 + 224);
        v23 = v40;
        *v22 = v39;
        v24 = v41;
        v22[1] = v23;
        v22[2] = v24;
        ReleaseMagInputLock(v26, v25);
        return 1LL;
      }
      return 0LL;
    }
    goto LABEL_17;
  }
  if ( v9 != 1 )
  {
LABEL_10:
    v15 = 87;
LABEL_18:
    UserSetLastError(v15);
    return 0LL;
  }
  v10 = *(_QWORD *)(v7 + 224);
  if ( !v10 )
    return 0LL;
  if ( v6 != *(struct tagTHREADINFO **)(v10 + 32)
    && v6 != *(struct tagTHREADINFO **)(W32GetUserSessionState(v4, v3) + 18696) )
  {
    goto LABEL_17;
  }
  AcquireMagInputLock(v4, v3);
  Win32FreePool(*(void **)(v7 + 224));
  *(_QWORD *)(v7 + 224) = 0LL;
  ReleaseMagInputLock(v12, v11);
  v13 = 805;
LABEL_24:
  PostMessage(-1, v13, 0, 0);
  return 1LL;
}
