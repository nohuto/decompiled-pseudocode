/*
 * XREFs of ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x18002C800
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180006190 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputProcessorWorker(const struct DeviceInfo **a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 (__fastcall **v9)(const struct DeviceInfo *); // rbx
  __int64 v10; // rax

  v4 = a4;
  result = 2147943568LL;
  if ( a4 < 0xF )
  {
    v9 = &off_1800D2250 + 6 * (int)a4;
    do
    {
      v10 = (__int64)*(v9 - 1);
      if ( _bittest64(&v10, gdwDeviceFamily) && (!a3 || a3 == *((_DWORD *)v9 - 4)) && (!*v9 || (unsigned int)(*v9)(*a1)) )
      {
        result = ((__int64 (__fastcall *)(const struct DeviceInfo **, __int64))v9[1])(a1, a2);
        if ( (int)result >= 0 )
          break;
      }
      ++v4;
      v9 += 6;
      result = 2147943568LL;
    }
    while ( v4 < 0xF );
  }
  return result;
}
