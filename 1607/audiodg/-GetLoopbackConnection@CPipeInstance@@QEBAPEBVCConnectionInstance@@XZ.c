/*
 * XREFs of ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14002E5BC
 * Callers:
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002F170 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@@Z @ 0x14002E468 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetLoopbackConnection(CPipeInstance *this)
{
  __int64 v2; // rax
  const struct CConnectionInstance *result; // rax
  struct CConnectionInstance *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 51) )
  {
    v2 = *((_QWORD *)this + 8);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    return *(const struct CConnectionInstance **)(v2 + 16);
  }
  v4 = 0LL;
  CPipeInstance::GetAPONodeAndConnection(this, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, 0LL, &v4);
  result = v4;
  if ( !v4 )
  {
    v4 = 0LL;
    CPipeInstance::GetAPONodeAndConnection(this, &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693, 0LL, &v4);
    result = v4;
    if ( !v4 )
    {
      v2 = *((_QWORD *)this + 8);
      if ( !v2 )
        ATL::AtlThrowImpl(-2147467259);
      return *(const struct CConnectionInstance **)(v2 + 16);
    }
  }
  return result;
}
