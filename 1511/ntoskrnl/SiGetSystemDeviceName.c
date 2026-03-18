/*
 * XREFs of SiGetSystemDeviceName @ 0x1405065FC
 * Callers:
 *     SyspartGetSystemPartition @ 0x1404FAF9C (SyspartGetSystemPartition.c)
 *     SyspartDirectGetSystemPartition @ 0x1405065E4 (SyspartDirectGetSystemPartition.c)
 *     SyspartDirectGetSystemDisk @ 0x1405195D8 (SyspartDirectGetSystemDisk.c)
 *     IopFindSystemDevice @ 0x1405FF2AC (IopFindSystemDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetSystemDeviceName(
        __int64 (__fastcall *a1)(_QWORD, void **),
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v8; // edi
  int v9; // edi
  __int64 v10; // rax
  unsigned int v11; // esi
  void *Src; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-60h]
  unsigned int *v15; // [rsp+30h] [rbp-58h]
  _BYTE SystemInformation[16]; // [rsp+38h] [rbp-50h] BYREF
  int v17; // [rsp+48h] [rbp-40h]

  v15 = a4;
  *a4 = 0;
  Src = 0LL;
  v8 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v8 = 0;
    if ( v17 < 3 )
      v8 = v17;
  }
  v9 = a1(v8, &Src);
  if ( v9 >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)Src + v10) );
    v11 = 2 * v10 + 2;
    v14 = v11;
    if ( a2 && a3 >= v11 )
    {
      v9 = 0;
      memmove(a2, Src, v11);
    }
    else
    {
      v9 = -1073741789;
    }
    *a4 = v11;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v9;
}
