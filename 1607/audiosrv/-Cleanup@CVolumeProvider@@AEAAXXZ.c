/*
 * XREFs of ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x180059C8C
 * Callers:
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x180059C10 (--1CVolumeProvider@@UEAA@XZ.c)
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     ?ProviderFinalRelease@CVolumeStrip@@QEAAXXZ @ 0x18005994C (-ProviderFinalRelease@CVolumeStrip@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180064468 (-FreeNode@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@.c)
 */

void __fastcall CVolumeProvider::Cleanup(CVolumeProvider *this)
{
  CVolumeProvider *v1; // rdi
  __int64 *v2; // rcx
  __int64 *v3; // rdx
  IUnknown *v4; // r14
  __int64 v5; // rax
  int *v6; // rbx
  ATL::CAtlException *v7; // [rsp+28h] [rbp-20h] BYREF
  IUnknown *v9; // [rsp+60h] [rbp+18h]

  v1 = this;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids);
  }
  while ( 2 )
  {
    if ( *((_QWORD *)v1 + 9) )
    {
      try
      {
        v2 = (__int64 *)((char *)v1 + 56);
        v3 = (__int64 *)*((_QWORD *)v1 + 7);
        if ( !v3 )
          ATL::AtlThrowImpl(-2147467259);
        v4 = (IUnknown *)v3[2];
        v5 = *v3;
        *v2 = *v3;
        if ( v5 )
          *(_QWORD *)(v5 + 8) = 0LL;
        else
          *((_QWORD *)v1 + 8) = 0LL;
        ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::FreeNode(v2);
        v9 = v4;
      }
      catch ( ATL::CAtlException *v7 )
      {
        v6 = (int *)v7;
        if ( *(_DWORD *)v7 == -1073741571 )
          _o__resetstkoflw();
        v1 = this;
        if ( *v6 >= 0 )
        {
          v4 = v9;
          goto LABEL_15;
        }
        continue;
      }
LABEL_15:
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_423b265ce07b3f1896f97f09dfab210f_Traceguids,
          (__int64)v4);
      }
      CVolumeStrip::ProviderFinalRelease(v4);
      ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
      continue;
    }
    break;
  }
}
