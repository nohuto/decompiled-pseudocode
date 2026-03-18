/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C00C6110
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C00CFDDC (DxgDetermineBootImageMode.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(__int64 a1)
{
  int v1; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  char v4; // di
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  bool v10; // zf
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1224));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = 1;
  v6 = *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 303);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_5:
          v4 = 0;
          goto LABEL_6;
        }
        v10 = v1 == 4;
      }
      else
      {
        v10 = v1 == 3;
      }
    }
    else
    {
      v10 = v1 == 2;
    }
    if ( !v10 )
      goto LABEL_5;
  }
  else if ( v1 != 1 )
  {
    goto LABEL_5;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal(v5) + 303) = v1;
LABEL_6:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v4;
}
