/*
 * XREFs of PlugPlayGetDeviceRelations @ 0x1406E0A44
 * Callers:
 *     PiPnpRtlGetDeviceRelationsList @ 0x14062F30C (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x14015C650 (ZwPlugPlayControl.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PlugPlayGetDeviceRelations(
        __int128 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        int a6)
{
  __int128 v11; // xmm0
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  _OWORD Buffer[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a5 || a6 )
    return 3221225485LL;
  memset(Buffer, 0, sizeof(Buffer));
  v11 = *a1;
  *(_QWORD *)&Buffer[1] = __PAIR64__(a4, a2);
  *((_QWORD *)&Buffer[1] + 1) = a3;
  Buffer[0] = v11;
  v12 = ZwPlugPlayControl(PlugPlayControlQueryDeviceRelations, Buffer, 0x20u);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = DWORD1(Buffer[1]);
    *a5 = DWORD1(Buffer[1]);
    if ( v14 )
    {
      if ( v14 > a4 )
        return (unsigned int)-1073741789;
      return v13;
    }
    return (unsigned int)-1073741772;
  }
  if ( v12 != -1073741789 )
    return (unsigned int)-1073741772;
  *a5 = DWORD1(Buffer[1]);
  return v13;
}
