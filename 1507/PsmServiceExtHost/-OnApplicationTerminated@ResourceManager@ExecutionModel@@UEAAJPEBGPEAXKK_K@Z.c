/*
 * XREFs of ?OnApplicationTerminated@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_K@Z @ 0x180036F80
 * Callers:
 *     <none>
 * Callees:
 *     RmpValidateAndCaptureUserSid @ 0x180002244 (RmpValidateAndCaptureUserSid.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::OnApplicationTerminated(
        ExecutionModel::ResourceManager *this,
        LPCWSTR pwsz,
        void *Src,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  SID *pSid; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[80]; // [rsp+40h] [rbp-88h] BYREF

  RmpValidateAndCaptureUserSid(Src, (__int64)pwsz, a5, v11, &pSid);
  ExecutionModel::ResourceManager::OnApplicationTerminated(this, pwsz, pSid, a4, a5, a6);
  return 0LL;
}
