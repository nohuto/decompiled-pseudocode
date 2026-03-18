/*
 * XREFs of UsbhQueryWmiRegInfo @ 0x1C0027860
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhQueryWmiRegInfo(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4, int a5, _QWORD *a6)
{
  _DWORD *v9; // rax

  v9 = FdoExt(a1, (__int64)a2, a3, (__int64)a4);
  *a2 = 32;
  *a4 = &UsbhRegistryPath;
  *a6 = *((_QWORD *)v9 + 149);
  Log(a1, 64, 2003659090, 0LL, 0LL);
  return 0LL;
}
