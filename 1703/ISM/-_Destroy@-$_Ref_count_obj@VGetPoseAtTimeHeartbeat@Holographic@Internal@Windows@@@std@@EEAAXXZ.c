/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@EEAAXXZ @ 0x18008CE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z @ 0x1800904E4 (-Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj<Windows::Internal::Holographic::GetPoseAtTimeHeartbeat>::_Destroy(__int64 a1)
{
  volatile __int64 *v1; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v1 = (volatile __int64 *)(a1 + 16);
  QueryPerformanceCounter(&PerformanceCount);
  Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::Report(
    (Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *)v1,
    PerformanceCount.QuadPart,
    1);
  return _InterlockedExchange64(v1 + 6, 0LL);
}
