/*
 * XREFs of ?Handle_RM_OnApplicationTerminated@ResourceManagerServerProxy@@QEAAJPEBGPEAEKKK_K@Z @ 0x180032718
 * Callers:
 *     RmtSrv_RM_OnApplicationTerminated @ 0x1800313C0 (RmtSrv_RM_OnApplicationTerminated.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z @ 0x180033510 (-ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_OnApplicationTerminated(
        ResourceManagerServerProxy *this,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned int v7; // esi

  v7 = 0;
  if ( a6 )
  {
    if ( !a3 || ResourceManagerServerProxy::ValidateUserSidInput(this, a3, a4) )
      goto LABEL_4;
    return (unsigned int)-2147024809;
  }
  if ( a3 || a5 )
    return (unsigned int)-2147024809;
LABEL_4:
  (*(void (__fastcall **)(_QWORD, const unsigned __int16 *, unsigned __int8 *, _QWORD, unsigned int, unsigned __int64))(**((_QWORD **)this + 7) + 208LL))(
    *((_QWORD *)this + 7),
    a2,
    a3,
    a5,
    a6,
    a7);
  return v7;
}
