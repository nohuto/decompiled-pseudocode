/*
 * XREFs of ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C018EC18
 * Callers:
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C018D364 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C018D390 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0028EC4 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Release(DXGSWAPCHAINLOCKWITHDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  char v7; // [rsp+38h] [rbp-10h]

  if ( *((_BYTE *)this + 43) )
  {
    COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
    v6 = 0LL;
    v7 = 0;
    COREACCESS::operator=((__int64)this + 56, (__int64)v5);
    COREACCESS::~COREACCESS((COREACCESS *)v5);
    *((_BYTE *)this + 43) = 0;
  }
  if ( *((_BYTE *)this + 41) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 6) + 80LL));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 41) = 0;
  }
  if ( *((_BYTE *)this + 42) )
  {
    v2 = *((_QWORD *)this + 6);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v2 + 16), (struct DXGDEVICE *)v2);
    v3 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 6) = 0LL;
    if ( *((_BYTE *)this + 16) )
      v4 = v3 + 128;
    else
      v4 = v3 + 72;
    *(_QWORD *)(v4 + 8) = 0LL;
    *((_BYTE *)this + 42) = 0;
  }
  if ( *((_BYTE *)this + 40) )
  {
    DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
    *((_BYTE *)this + 40) = 0;
  }
}
