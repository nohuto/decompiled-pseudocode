/*
 * XREFs of PspWriteTebIdealProcessor @ 0x140479050
 * Callers:
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  _KPROCESS *v5; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // rtt
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rtt
  signed __int32 v16[8]; // [rsp+0h] [rbp-B8h] BYREF
  char v17; // [rsp+20h] [rbp-98h]
  char v18; // [rsp+21h] [rbp-97h]
  int v19; // [rsp+24h] [rbp-94h]
  int v20; // [rsp+28h] [rbp-90h] BYREF
  int v21; // [rsp+2Ch] [rbp-8Ch]
  __int64 v22; // [rsp+30h] [rbp-88h]
  __int64 v23; // [rsp+38h] [rbp-80h]
  __int64 v24; // [rsp+40h] [rbp-78h]
  int *v25; // [rsp+50h] [rbp-68h]
  _BYTE v26[48]; // [rsp+58h] [rbp-60h] BYREF

  v23 = a2;
  v19 = 0;
  v4 = *(_QWORD *)(a2 + 240);
  v24 = v4;
  v5 = *(_KPROCESS **)(a2 + 544);
  v25 = &v20;
  if ( v5[1].ActiveProcessors.Bitmap[7] )
    v6 = v4 + 0x2000;
  else
    v6 = 0LL;
  v22 = v6;
  v18 = 0;
  if ( a2 != a1 )
  {
    _m_prefetchw((const void *)(a2 + 1696));
    v7 = *(_QWORD *)(a2 + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1696), v7 + 2, v7)
      && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1696)) )
    {
      return;
    }
    v18 = 1;
  }
  v17 = 0;
  if ( v5 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v5, 0, (__int64)v26);
    v17 = 1;
  }
  v8 = *(unsigned int *)(a2 + 196);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 < 0x280 )
    {
      v9 = KiProcessorIndexToNumberMappingTable[v8];
      if ( v9 )
      {
        LOWORD(v20) = v9 >> 6;
        HIWORD(v20) = v9 & 0x3F;
      }
    }
  }
  else
  {
    v20 = 0;
  }
  while ( 1 )
  {
    HIBYTE(v20) = BYTE2(v20);
    v10 = v20;
    *(_DWORD *)(v4 + 5956) = v20;
    if ( v6 )
    {
      LOWORD(v21) = v10;
      BYTE2(v21) = BYTE2(v10) & 0x1F;
      HIBYTE(v21) = HIBYTE(v10) & 0x1F;
      *(_DWORD *)(v6 + 3956) = v21;
    }
    _InterlockedOr(v16, 0);
    v11 = *(unsigned int *)(a2 + 196);
    if ( (_DWORD)v11 )
    {
      if ( (unsigned int)v11 < 0x280 && (v12 = KiProcessorIndexToNumberMappingTable[v11]) != 0 )
      {
        v13 = v12 >> 6;
        LOWORD(v19) = v12 >> 6;
        v14 = v12 & 0x3F;
        HIWORD(v19) = v14;
      }
      else
      {
        v14 = BYTE2(v19);
        LOWORD(v13) = v19;
      }
    }
    else
    {
      LOWORD(v13) = 0;
      v19 = 0;
      v14 = 0;
    }
    if ( v14 == BYTE2(v20) && (_WORD)v13 == (_WORD)v20 )
      break;
    v20 = v19;
  }
  if ( v17 )
    KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
  if ( v18 )
  {
    _m_prefetchw((const void *)(a2 + 1696));
    v15 = *(_QWORD *)(a2 + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1696), v15 - 2, v15) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1696));
  }
}
