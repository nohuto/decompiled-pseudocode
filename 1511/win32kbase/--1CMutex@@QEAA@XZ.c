/*
 * XREFs of ??1CMutex@@QEAA@XZ @ 0x1C0067B90
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00837C8 (--_GCMutex@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMutex::~CMutex(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D504F47u);
    *this = 0LL;
  }
}
