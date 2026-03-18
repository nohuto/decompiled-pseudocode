/*
 * XREFs of PnpStartDevice @ 0x140026678
 * Callers:
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x1400271E8 (PoFxPrepareDevice.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpAsynchronousCall @ 0x140461980 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpStartDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned __int64 v13; // rcx
  _QWORD v14[9]; // [rsp+30h] [rbp-39h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+Fh] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+1Fh] BYREF

  v4 = a2;
  if ( a1 )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = 1;
  LOBYTE(a2) = 1;
  PoFxPrepareDevice(v6, a2);
  *(_DWORD *)(v6 + 140) = 1;
  memset(v14, 0, sizeof(v14));
  v14[1] = *(_QWORD *)(v6 + 416);
  v14[2] = *(_QWORD *)(v6 + 424);
  LOWORD(v14[0]) = 27;
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
         (unsigned __int16)KeActiveProcessors <= Affinity.Group)
      ? (v13 = 0LL)
      : (v13 = qword_1403D15E8[Affinity.Group] & Affinity.Mask),
        (Affinity.Mask = v13) != 0) )
  {
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  else
  {
    v7 = 0;
  }
  if ( v4 )
    v10 = PnpAsynchronousCall(a1, v14, v4, a3);
  else
    v10 = IopSynchronousCall(a1, (unsigned int)v14, -1073741637, 0, a3);
  v11 = v10;
  if ( v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v11;
}
