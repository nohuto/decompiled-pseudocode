/*
 * XREFs of ?GetDeviceTierName@ResourceManagerClientProxy@@UEAAPEBGXZ @ 0x180007C40
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x180007CB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGHPEAUIRMExecServicesProvider@ExecutionModel@@@Z.c)
 * Callees:
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180007EBC (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x180007FAC (-RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z.c)
 */

char *__fastcall ResourceManagerClientProxy::GetDeviceTierName(ResourceManagerClientProxy *this)
{
  char *v1; // rbx
  unsigned int DeviceTier; // eax
  __int64 DeviceTierName; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  _WORD *v6; // rcx
  __int16 v7; // ax

  v1 = (char *)this + 20656;
  if ( !*((_WORD *)this + 10328) )
  {
    DeviceTier = RmpGetDeviceTier();
    DeviceTierName = RmpGetDeviceTierNameEx(DeviceTier);
    v4 = 260LL;
    v5 = DeviceTierName - (_QWORD)v1;
    v6 = v1;
    do
    {
      if ( v4 == -2147483386 )
        break;
      v7 = *(_WORD *)((char *)v6 + v5);
      if ( !v7 )
        break;
      *v6++ = v7;
      --v4;
    }
    while ( v4 );
    if ( !v4 )
      --v6;
    *v6 = 0;
  }
  return v1;
}
