/*
 * XREFs of ExpGenuinePolicyCacheProvider @ 0x140497EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     KeQueryTimeIncrement @ 0x140087980 (KeQueryTimeIncrement.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 *     sub_1406AED4C @ 0x1406AED4C (sub_1406AED4C.c)
 */

__int64 __fastcall ExpGenuinePolicyCacheProvider(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  int v7; // r14d
  int v8; // edi
  __int64 v9; // rbx
  bool v10; // si
  __int64 v11; // r15
  __int64 v12; // rbx
  int KernelDataProtection; // eax
  unsigned int v14; // ecx
  _BYTE *v16; // rax
  signed __int8 v17; // cf
  _BYTE *v18; // rbx
  bool v19; // bl
  int updated; // eax
  __int64 v21; // rdx
  char v22; // si
  __int64 v23; // rbx
  ULONG TimeIncrement; // eax
  __int128 *v25; // rcx
  char v26; // dl
  __int64 v27; // rdx
  __int128 v28; // [rsp+38h] [rbp-D0h] BYREF
  __m256i v29; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+78h] [rbp-90h]
  __int128 v32; // [rsp+88h] [rbp-80h]
  __int128 v33; // [rsp+A0h] [rbp-68h] BYREF
  __m256i v34; // [rsp+B0h] [rbp-58h]
  _OWORD v35[3]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v36[16]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v37; // [rsp+110h] [rbp+8h]
  char v38; // [rsp+130h] [rbp+28h] BYREF
  int v39; // [rsp+138h] [rbp+30h]
  _QWORD v40[6]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v41[8]; // [rsp+190h] [rbp+88h] BYREF
  int v42; // [rsp+198h] [rbp+90h]
  _BYTE v43[104]; // [rsp+1C0h] [rbp+B8h] BYREF

  v7 = -1073741811;
  v8 = 4;
  if ( off_140747028 )
    goto LABEL_48;
  if ( !Data )
  {
LABEL_50:
    v8 = dword_1407470B4;
    goto LABEL_20;
  }
  v9 = KeAbPreAcquire((ULONG_PTR)&qword_140747BF0, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747BF0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747BF0, v9, (ULONG_PTR)&qword_140747BF0);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = qword_140747C68 == 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747BF0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747BF0);
  KeAbPostRelease((ULONG_PTR)&qword_140747BF0);
  if ( !v10 )
  {
    if ( (int)ExpGetKernelDataProtection(v36) < 0 || !v37 || v37 + 900000 <= v37 )
      goto LABEL_23;
    v12 = MEMORY[0xFFFFF78000000320];
    v11 = v37 + 900000;
    if ( v11 <= v12 * KeQueryTimeIncrement() / 10000 )
      v10 = 1;
  }
  if ( !v10 )
    goto LABEL_16;
LABEL_23:
  if ( !off_140747028 )
  {
    if ( !Data )
      goto LABEL_50;
    v16 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747BF0, 0LL, 0);
    v17 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747BF0, 0LL);
    v18 = v16;
    if ( v17 )
      ExfAcquirePushLockExclusiveEx(&qword_140747BF0, v16, (ULONG_PTR)&qword_140747BF0);
    if ( v18 )
      v18[26] |= 1u;
    v19 = qword_140747C68 == 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747BF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747BF0);
    KeAbPostRelease((ULONG_PTR)&qword_140747BF0);
    if ( v19 )
    {
      v25 = (__int128 *)&v38;
      dword_1407470B4 = 5;
      v39 = 5;
      v26 = 2;
    }
    else
    {
      if ( Data )
      {
        *(_QWORD *)&v28 = 0LL;
        v29.m256i_i8[24] = 1;
        memset(&v29, 0, 24);
        DWORD2(v28) = 4;
        updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v28);
        if ( updated
          || (_DWORD)v21
          && (16 * (unsigned __int64)(unsigned int)v21 > 0xFFFFFFFF
           || (updated = ExpLicUpdateChecksum((__int64)qword_1407494C0, v21, &v28)) != 0) )
        {
          *(_QWORD *)&v28 = 0LL;
          updated = 0;
          DWORD2(v28) = 4;
        }
        v33 = v28;
        v34 = v29;
      }
      else
      {
        updated = -1073741811;
      }
      if ( updated || (int)ExpGetKernelDataProtection(v40) < 0 )
      {
LABEL_16:
        if ( !off_140747028 )
          goto LABEL_17;
        goto LABEL_48;
      }
      v22 = 4;
      if ( v40[0] != (_QWORD)v33 )
      {
        DWORD2(v33) = 4;
        v22 = 6;
      }
      v23 = MEMORY[0xFFFFF78000000320];
      TimeIncrement = KeQueryTimeIncrement();
      v25 = &v33;
      v34.m256i_i64[0] = v23 * TimeIncrement / 10000;
      v26 = v22;
    }
    ExpSetKernelDataProtection((__int64)v25, v26, 0);
    goto LABEL_16;
  }
LABEL_48:
  if ( KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    dword_1407470B4 = 2;
    v42 = 2;
    ExpSetKernelDataProtection((__int64)v41, 2, 0);
    v43[40] = 0;
    ExpSetKernelDataProtection((__int64)v43, 32, 0);
  }
LABEL_17:
  if ( !Data )
    goto LABEL_50;
  KernelDataProtection = ExpGetKernelDataProtection(v35);
  if ( KernelDataProtection < 0 )
  {
    if ( KernelDataProtection == -1073741275 )
    {
      if ( Data )
      {
        *(_QWORD *)&v30 = 0LL;
        v31 = 0uLL;
        DWORD2(v30) = 4;
        *(_QWORD *)&v32 = 0LL;
        BYTE8(v32) = 1;
        v7 = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v30);
        if ( v7
          || (_DWORD)v27
          && (16 * (unsigned __int64)(unsigned int)v27 > 0xFFFFFFFF
           || (v7 = ExpLicUpdateChecksum((__int64)qword_1407494C0, v27, &v30)) != 0) )
        {
          *(_QWORD *)&v30 = 0LL;
          v7 = 0;
          DWORD2(v30) = 4;
        }
        v35[0] = v30;
        v35[1] = v31;
        v35[2] = v32;
      }
      if ( v7 >= 0 )
      {
        DWORD2(v35[0]) = 4;
        ExpSetKernelDataProtection((__int64)v35, -1, 0);
      }
    }
  }
  else
  {
    v8 = DWORD2(v35[0]);
  }
LABEL_20:
  if ( v8 )
  {
    *a5 = 1;
    return (unsigned int)sub_1406AED4C(a1, a2, a3, a4, 0);
  }
  else
  {
    v14 = -1073741772;
    *a5 = 0;
  }
  return v14;
}
