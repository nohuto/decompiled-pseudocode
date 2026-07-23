/*
 * XREFs of ExpHwidBiosIfGetFirmwareTable @ 0x1404D16B8
 * Callers:
 *     sub_1404D15FC @ 0x1404D15FC (sub_1404D15FC.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpHwidBiosIfGetFirmwareTable(__int64 a1, __int64 a2, char a3, ULONG *a4, _QWORD *a5)
{
  ULONG v7; // eax
  _DWORD *PoolWithTag; // rax
  void *v9; // rbx
  NTSTATUS v10; // edi
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  _QWORD SystemInformation[2]; // [rsp+28h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-18h]

  ReturnLength = 0;
  SystemInformation[1] = 0LL;
  v14 = 0;
  SystemInformation[0] = 0x152534D42LL;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789 )
  {
    v7 = ReturnLength;
    *a4 = ReturnLength;
    if ( a3 )
    {
      return 0;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x20534C53u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = 0;
        *PoolWithTag = 1381190978;
        PoolWithTag[1] = 1;
        PoolWithTag[3] = ReturnLength - 16;
        v10 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, ReturnLength, &ReturnLength);
        if ( v10 >= 0 )
        {
          *a5 = v9;
          v9 = 0LL;
        }
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
