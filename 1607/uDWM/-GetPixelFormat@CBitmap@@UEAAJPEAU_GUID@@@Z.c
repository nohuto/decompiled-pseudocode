/*
 * XREFs of ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x18009C430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18009B350 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 *     ?MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z @ 0x18009C7C0 (-MilPfToWic@@YAJW4Enum@MilPixelFormat@@PEAU_GUID@@@Z.c)
 */

__int64 __fastcall CBitmap::GetPixelFormat(CBitmap *this, struct _GUID *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(char *, int *))(*((_QWORD *)this - 3) + 24LL))((char *)this - 24, &v6);
  if ( (int)result >= 0 )
  {
    v5 = DXGIFormatToPixelFormat(v6, *((_DWORD *)this + 41) == 1);
    return MilPfToWic(v5, a2);
  }
  return result;
}
