/*
 * XREFs of PnpQueryDeviceRelations @ 0x140461830
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x14045D640 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x140535938 (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x1405B3954 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x140695374 (PiQueryDeviceRelations.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpAsynchronousCall @ 0x140461980 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  unsigned int v9; // edx
  int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned __int64 v14; // rcx
  _DWORD v15[18]; // [rsp+30h] [rbp-29h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+1Fh] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+2Fh] BYREF

  memset(v15, 0, sizeof(v15));
  LOWORD(v15[0]) = 1819;
  v15[2] = a2;
  if ( a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v8 = 0LL;
  if ( v8
    && (v9 = *(_DWORD *)(v8 + 660), v9 <= 0xFFFFFFFD)
    && v9 < (unsigned __int16)KeNumberNodes
    && ((KeQueryNodeActiveAffinity(*(_WORD *)(v8 + 660), &Affinity, 0LL),
         *(_DWORD *)Affinity.Reserved = 0,
         Affinity.Reserved[2] = 0,
         LOWORD(KeActiveProcessors[0]) <= Affinity.Group)
      ? (v14 = 0LL)
      : (v14 = qword_1403D15E8[Affinity.Group] & Affinity.Mask),
        (Affinity.Mask = v14) != 0) )
  {
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( a3 )
    v11 = PnpAsynchronousCall(a1, v15, a3, a4);
  else
    v11 = IopSynchronousCall(a1, (unsigned int)v15, -1073741637, 0, a4);
  v12 = v11;
  if ( v10 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v12;
}
