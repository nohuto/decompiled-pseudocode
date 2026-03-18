/*
 * XREFs of ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1C001CFB8
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
        VIDSCH_EXPORT *this,
        unsigned int a2,
        struct _VIDSCH_CONTEXT **a3,
        unsigned int a4,
        struct _VIDSCH_SYNC_OBJECT **a5,
        struct _D3DDDICB_SIGNALFLAGS a6,
        const unsigned __int64 *a7)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_CONTEXT **, _QWORD, struct _VIDSCH_SYNC_OBJECT **, struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535, const unsigned __int64 *))(*((_QWORD *)this + 1) + 544LL))(
           a2,
           a3,
           a4,
           a5,
           a6.0,
           a7);
}
