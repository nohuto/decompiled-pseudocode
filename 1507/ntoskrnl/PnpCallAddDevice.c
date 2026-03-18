/*
 * XREFs of PnpCallAddDevice @ 0x140580178
 * Callers:
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     PpvUtilCallAddDevice @ 0x140158984 (PpvUtilCallAddDevice.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PnpCallAddDevice(
        __int64 a1,
        struct _DRIVER_OBJECT *a2,
        __int64 (__fastcall *a3)(struct _DRIVER_OBJECT *, struct _DEVICE_OBJECT *))
{
  __int64 v3; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  int v9; // ebx
  unsigned int v10; // edi
  unsigned __int64 v12; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( v7
    && (v8 = *(_DWORD *)(v7 + 660), v8 <= 0xFFFFFFFD)
    && v8 < (unsigned __int16)KeNumberNodes
    && ((KeQueryNodeActiveAffinity(*(_WORD *)(v7 + 660), &Affinity, 0LL),
         *(_DWORD *)Affinity.Reserved = 0,
         Affinity.Reserved[2] = 0,
         LOWORD(KeActiveProcessors[0]) <= Affinity.Group)
      ? (v12 = 0LL)
      : (v12 = qword_1403D15E8[Affinity.Group] & Affinity.Mask),
        (Affinity.Mask = v12) != 0) )
  {
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  v10 = PpvUtilCallAddDevice(*(struct _DEVICE_OBJECT **)(a1 + 32), a2, a3);
  if ( v9 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
