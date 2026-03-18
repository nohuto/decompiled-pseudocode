/*
 * XREFs of ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00BFC70
 * Callers:
 *     NtGdiOpenDCW @ 0x1C006E790 (NtGdiOpenDCW.c)
 * Callees:
 *     FreeThreadBufferWithTag @ 0x1C006EA90 (FreeThreadBufferWithTag.c)
 *     AllocThreadBufferWithTag @ 0x1C006EB30 (AllocThreadBufferWithTag.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

struct _devicemodeW *__fastcall CaptureDEVMODEW(struct _devicemodeW *volatile a1)
{
  int dmSize; // esi
  int dmDriverExtra; // r14d
  __int64 v3; // rdi
  _WORD *v4; // rbx

  dmSize = a1->dmSize;
  dmDriverExtra = a1->dmDriverExtra;
  v3 = (unsigned int)(dmSize + dmDriverExtra);
  if ( (unsigned int)(v3 - 73) > 0x270FFB7 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag(v3, 1886221383LL, 0);
  if ( v4 )
  {
    if ( (struct _devicemodeW *volatile)((char *)a1 + v3) < a1
      || (unsigned __int64)a1->dmDeviceName + v3 > W32UserProbeAddress )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    memmove(v4, a1, (unsigned int)v3);
    v4[34] = dmSize;
    v4[35] = dmDriverExtra;
  }
  return (struct _devicemodeW *)v4;
}
