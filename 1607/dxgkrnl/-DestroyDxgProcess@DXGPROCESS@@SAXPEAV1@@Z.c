/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00CE444
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C000C4D0 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0168A04 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0009544 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C000C4EC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  struct DXGFASTMUTEX *v2; // rdx
  __int64 v3; // rcx
  struct DXGPROCESS *v4; // rcx
  struct DXGPROCESS **v5; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-19h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-9h] BYREF
  _QWORD v8[8]; // [rsp+40h] [rbp+7h] BYREF

  if ( this )
  {
    memset(v8, 0, sizeof(v8));
    EtwActivityIdControl(3u, (LPGUID)&v8[1]);
    v2 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 10);
    v8[7] = MEMORY[0xFFFFF78000000014];
    LODWORD(v8[3]) = 36;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, v2);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    DXGPROCESS::Destroy((DXGFASTMUTEX **)this, (struct _ERESOURCE *)v8);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
    PsSetProcessDxgProcess(*((_QWORD *)this + 6), 0LL);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v6);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    DXGGLOBAL::GetGlobal(v3);
    v4 = *(struct DXGPROCESS **)this;
    v5 = (struct DXGPROCESS **)*((_QWORD *)this + 1);
    if ( *(struct DXGPROCESS **)(*(_QWORD *)this + 8LL) != this || *v5 != this )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    DXGPROCESS::ReleaseReference((__int64 *)this);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
    if ( v6[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
    if ( v7[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  }
}
