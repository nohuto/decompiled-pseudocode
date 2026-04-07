/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x18009C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18009B350 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 *     ?MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z @ 0x18009C7C0 (-MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  char *v4; // rcx
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  char *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( this == (CBitmapLock *)80 )
    v4 = 0LL;
  else
    v4 = (char *)this - 64;
  v5 = v4[48] == 0;
  v10 = v4;
  if ( !v5 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v6 = DXGIFormatToPixelFormat(*((_DWORD *)this + 10), *((_DWORD *)this + 11) == 1);
  v7 = MilPfToWic(v6, a2);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xC8u);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v10);
  return v8;
}
