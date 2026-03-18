/*
 * XREFs of KeInitializeProfileCallback @ 0x1406992BC
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 *     EtwpSetPmcProfileSource @ 0x1406E51EC (EtwpSetPmcProfileSource.c)
 *     KiInitializeCacheErrataSupport @ 0x1407FB13C (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall KeInitializeProfileCallback(_DWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned __int16 v8; // dx
  __int64 result; // rax
  __int64 v10; // rcx

  memset(a1, 0, 0xF8uLL);
  *a1 = 16252945;
  v8 = 0;
  *((_BYTE *)a1 + 242) = 0;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  *((_WORD *)a1 + 120) = a4;
  *((_WORD *)a1 + 36) = KeActiveProcessors[0];
  result = HIWORD(KeActiveProcessors[0]);
  *((_WORD *)a1 + 37) = HIWORD(KeActiveProcessors[0]);
  a1[19] = 0;
  while ( v8 < LOWORD(KeActiveProcessors[0]) )
  {
    v10 = v8++;
    result = qword_1403D15E8[v10];
    *(_QWORD *)&a1[2 * v10 + 20] = result;
  }
  return result;
}
