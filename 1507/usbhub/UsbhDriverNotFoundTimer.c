/*
 * XREFs of UsbhDriverNotFoundTimer @ 0x1C004AE60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C0019160 (UsbhUnlatchPdo.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 */

__int64 __fastcall UsbhDriverNotFoundTimer(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  _DWORD *v12; // rax

  v6 = UsbhLatchPdo(a2, a3, 0LL, 0x444E4654u);
  v10 = v6;
  if ( v6 )
  {
    if ( v6 != a4 )
    {
      v11 = v6;
LABEL_6:
      UsbhUnlatchPdo(a2, v11, 0LL, 0x444E4654u);
      return 0LL;
    }
    v12 = PdoExt(a4, v7, v8, v9);
    if ( (int)UsbhQueueWorkItemEx(
                *((_QWORD *)v12 + 147),
                1LL,
                (__int64)UsbhDriverNotFoundWorker,
                a4,
                *((unsigned __int16 *)v12 + 710),
                0x77464E44u,
                0LL) < 0 )
    {
      v11 = v10;
      goto LABEL_6;
    }
  }
  return 0LL;
}
