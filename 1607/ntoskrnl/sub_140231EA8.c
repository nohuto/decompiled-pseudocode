/*
 * XREFs of sub_140231EA8 @ 0x140231EA8
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     PsQueryThreadTerminationPort @ 0x1403E1218 (PsQueryThreadTerminationPort.c)
 *     KeRundownApcQueues @ 0x1404EE9DC (KeRundownApcQueues.c)
 */

void __fastcall __noreturn sub_140231EA8(__int64 a1)
{
  __int64 ThreadTerminationPort; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_Object; // r15
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  _BYTE *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rdi
  unsigned __int64 v14; // r10
  _QWORD *v15; // r9
  char *v16; // rcx
  char v17; // al
  unsigned int v18; // r11d
  __int64 v19; // rbx
  unsigned __int64 v20; // r13
  char v21; // di
  char v22; // cl
  __int64 v23; // rdx
  char v24; // cl
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v29[4]; // [rsp+38h] [rbp-30h] BYREF
  __int16 Object; // [rsp+48h] [rbp-20h] BYREF
  char v31; // [rsp+4Ah] [rbp-1Eh]
  int v32; // [rsp+4Ch] [rbp-1Ch]
  _QWORD v33[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+B8h] [rbp+50h]
  LARGE_INTEGER Interval; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+60h]

  ThreadTerminationPort = PsQueryThreadTerminationPort();
  Interval.QuadPart = -1200000000 - (unsigned int)ExGenRandom(1) % 100000000LL;
  if ( *(_QWORD *)(a1 + 8) == 1LL )
    KeRundownApcQueues(KeGetCurrentThread());
  if ( (unsigned int)ExGenRandom(1) % 0xA < 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  p_Object = *(struct _KEVENT **)a1;
  KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, 0LL);
  if ( (unsigned int)ExGenRandom(1) % 0xA >= 5 )
  {
    KeResetEvent(p_Object);
  }
  else
  {
    Object = 0;
    v33[1] = v33;
    p_Object = (struct _KEVENT *)&Object;
    v31 = 6;
    v33[0] = v33;
    v32 = 0;
  }
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (unsigned int)ExGenRandom(1) ^ 0x6A15A217BC2A27DBLL;
  *(_QWORD *)ThreadTerminationPort = 0LL;
  v8 = v6 ^ v7;
  v9 = v5 ^ v7;
  v10 = v8;
  while ( 1 )
  {
    if ( (v10 ^ v7) >> 47 == -1 || (v10 ^ v7) >> 47 == 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))((v9 ^ v7) + 0x18))(
        v9 ^ v7,
        v10 ^ v7,
        *(_QWORD *)((v9 ^ v7) + 0x28),
        *(_QWORD *)((v9 ^ v7) + 0x30));
      v10 = v7 ^ *(_QWORD *)((v9 ^ v7) + 0x20);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v29[0] = 34539786;
    v29[1] = 218497804;
    v29[2] = 235143175;
    v11 = v29;
    v29[3] = 134284555;
    v12 = v10 ^ v7 ^ *(_QWORD *)((v9 ^ v7) + 0x40);
    v13 = 16LL;
    v14 = v12 | 0xFFFF800000000000uLL;
    v15 = (_QWORD *)v14;
    v16 = (char *)v29;
    v36 = __ROR8__(v14, v14 & 0x3F);
    do
    {
      v17 = *v16++;
      *v11++ = v17 ^ 0xA;
      --v13;
    }
    while ( v13 );
    v18 = 0;
    v19 = 0LL;
    v20 = v36;
    do
    {
      v21 = *v15 & 0x3F;
      v22 = ~(unsigned __int8)*v15 & 0x3F;
      *v15 = v19 + (KiWaitAlways ^ _byteswap_uint64(v20 ^ __ROL8__(KiWaitNever ^ *v15, KiWaitNever)));
      v23 = __ROR8__(v18 * (200 - v18), v22);
      v24 = v21;
      v25 = 16LL;
      v20 = v14 + __ROL8__(v23 ^ v20, v24);
      do
      {
        *v15 = __ROR8__(*((unsigned __int8 *)v29 + (*(_BYTE *)v15 & 0xF)) | *v15 & 0xFFFFFFFFFFFFFFF0uLL, 4);
        --v25;
      }
      while ( v25 );
      ++v15;
      ++v18;
      v19 += v14;
    }
    while ( v18 < 0x19 );
    v36 = v20;
    v36 = *(_QWORD *)v14 ^ 0x85131481131482ELL;
    v26 = v36;
    *(_BYTE *)(v14 + 3) = 17;
    *(_BYTE *)(v14 + 2) = 49;
    *(_BYTE *)(v14 + 1) = 72;
    *(_BYTE *)v14 = 46;
    ((void (__fastcall *)(unsigned __int64, __int64, _QWORD, _QWORD))v14)(v14, v26, 0LL, 0LL);
    __writecr8(CurrentIrql);
    if ( *(__int64 *)ThreadTerminationPort > 0 )
    {
      v27 = -*(_QWORD *)ThreadTerminationPort;
      *(_QWORD *)ThreadTerminationPort = 0LL;
      v28 = v27;
      (*(void (__fastcall **)(_QWORD))(v27 + 16))(*(_QWORD *)(v27 + 24));
      memset((void *)v27, 0, 0x20uLL);
      memset(&v28, 0, sizeof(v28));
    }
    while ( !*(_QWORD *)ThreadTerminationPort )
    {
      if ( (v7 & 1) != 0 )
        KeDelayExecutionThread(0, 0, &Interval);
      else
        KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
    }
    v9 = v7 ^ *(_QWORD *)ThreadTerminationPort;
    v10 = v7 ^ *(_QWORD *)(*(_QWORD *)ThreadTerminationPort + 32LL);
    *(_QWORD *)ThreadTerminationPort = 0LL;
    if ( (v7 & 1) != 0 )
      KeDelayExecutionThread(0, 0, &Interval);
    else
      KeWaitForSingleObject(p_Object, Executive, 0, 0, &Interval);
  }
}
