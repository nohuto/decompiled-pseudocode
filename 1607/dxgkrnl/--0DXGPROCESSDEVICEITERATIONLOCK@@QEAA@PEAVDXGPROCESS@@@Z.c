/*
 * XREFs of ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001D6C8
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C009F9A0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01686FC (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESSDEVICEITERATIONLOCK *__fastcall DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK(
        DXGPROCESSDEVICEITERATIONLOCK *this,
        struct DXGPROCESS *a2)
{
  char *v2; // rbx

  *(_QWORD *)this = a2;
  v2 = (char *)a2 + 152;
  if ( !*((_BYTE *)a2 + 288) )
    v2 = (char *)a2 + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  return this;
}
