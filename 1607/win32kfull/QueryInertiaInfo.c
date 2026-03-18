/*
 * XREFs of QueryInertiaInfo @ 0x1C022A1F0
 * Callers:
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01E8654 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C021F948 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C00FB9D8 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01DB530 (DCEHitTestWindow.c)
 */

__int64 __fastcall QueryInertiaInfo(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r11
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r11
  __int64 v10; // rdx
  struct tagKE *v11; // rcx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp+10h]

  v14 = a2;
  v3 = 0LL;
  v4 = a2;
  if ( (*(_DWORD *)(a1 + 136) & 1) == 0 || a3 && a3 != *(_DWORD *)(a1 + 24) )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 120);
  if ( !v7 )
    goto LABEL_10;
  v8 = ValidateHwnd(v7);
  v3 = v8;
  if ( !v8 || *(char *)(v8 + 44) < 0 || *(char *)(v8 + 43) < 0 )
    return 0LL;
  v4 = v14;
LABEL_10:
  if ( (*(_DWORD *)(a1 + 136) & 4) != 0 )
  {
    v13 = v4;
    if ( !(unsigned int)DCEHitTestWindow((struct tagKE *)(a1 + 40), a1 + 56, (__int64)&v13, 0LL) )
      return 0LL;
  }
  if ( v3 && !(unsigned int)IsCompositionInputWindow((struct tagWND *)v3) )
  {
    v10 = *(_QWORD *)(v3 + 272);
    v11 = (struct tagKE *)(v3 + 112);
    v13 = v9;
    if ( !(v10 ? DCEHitTestWindow(v11, v10, (__int64)&v13, 0LL) : DCEPtInRect(v11, v9)) )
      return 0LL;
  }
  return a1;
}
