/*
 * XREFs of StorEtwIORequestDispatch @ 0x1C00350B4
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     Template_pcxxpc @ 0x1C0035FA8 (Template_pcxxpc.c)
 *     StRtlIoStorInfoGetNvCachePriority @ 0x1C003B6E0 (StRtlIoStorInfoGetNvCachePriority.c)
 */

char __fastcall StorEtwIORequestDispatch(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  int v3; // r15d
  char v4; // r14
  __int64 v5; // rsi
  unsigned __int8 v7; // al
  int v8; // r12d
  char *SrbScsiData; // rax
  char *v10; // r9
  __int64 v11; // rsi
  int NvCachePriority; // eax
  char v13; // cl
  void *v14; // rdx
  char v16; // [rsp+50h] [rbp-30h] BYREF
  char v17[3]; // [rsp+51h] [rbp-2Fh] BYREF
  int v18; // [rsp+54h] [rbp-2Ch]
  __int64 v19; // [rsp+58h] [rbp-28h]
  int v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+64h] [rbp-1Ch]
  int v22; // [rsp+6Ch] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 184);
  v19 = 0LL;
  v2 = 0;
  v3 = 0;
  v16 = 0;
  v4 = -1;
  v18 = 0;
  v5 = *(_QWORD *)(v1 + 8);
  v17[0] = -1;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  IoGetActivityIdIrp(a1, &v20);
  v7 = *(_BYTE *)(v5 + 2);
  if ( v7 == 40 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    SrbScsiData = (char *)GetSrbScsiData(v5, &v16, 0LL, 0LL, 0LL, 0LL);
    v10 = SrbScsiData;
    if ( SrbScsiData )
      v2 = *SrbScsiData;
    v11 = *(_QWORD *)(v5 + 104);
    LOBYTE(NvCachePriority) = v16;
  }
  else
  {
    v10 = (char *)(v5 + 72);
    v8 = v7;
    LOBYTE(NvCachePriority) = *(_BYTE *)(v5 + 10);
    v2 = *(_BYTE *)(v5 + 72);
    v11 = *(_QWORD *)(v5 + 56);
  }
  if ( v10 )
  {
    if ( (_BYTE)NvCachePriority == 16 )
    {
      HIBYTE(v19) = v10[2];
      BYTE6(v19) = v10[3];
      BYTE5(v19) = v10[4];
      BYTE4(v19) = v10[5];
      BYTE3(v19) = v10[6];
      BYTE2(v19) = v10[7];
      BYTE1(v19) = v10[8];
      LOBYTE(v19) = v10[9];
      HIBYTE(v18) = v10[10];
      BYTE2(v18) = v10[11];
      BYTE1(v18) = v10[12];
      LOBYTE(NvCachePriority) = v10[13];
    }
    else
    {
      BYTE3(v19) = v10[2];
      BYTE2(v19) = v10[3];
      BYTE1(v19) = v10[4];
      LOBYTE(v19) = v10[5];
      BYTE1(v18) = v10[7];
      LOBYTE(NvCachePriority) = v10[8];
    }
    LOBYTE(v18) = NvCachePriority;
    v3 = v18;
  }
  if ( v11 )
  {
    NvCachePriority = StRtlIoStorInfoGetNvCachePriority(v11, v17);
    v13 = v17[0];
    if ( NvCachePriority < 0 )
      v13 = -1;
    v4 = v13;
  }
  if ( !v8 )
  {
    if ( ((v2 - 8) & 0x5F) != 0 )
    {
      LOBYTE(NvCachePriority) = v2 - 10;
      if ( ((v2 - 10) & 0x5F) == 0 )
      {
        NvCachePriority = *(_DWORD *)(a1 + 16);
        if ( (NvCachePriority & 0x42) != 0 )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000) != 0 )
          {
            v14 = &EventPagingWriteRequest;
            goto LABEL_28;
          }
        }
        else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x400) != 0 )
        {
          v14 = &EventWriteRequest;
          goto LABEL_28;
        }
      }
    }
    else
    {
      NvCachePriority = *(_DWORD *)(a1 + 16);
      if ( (NvCachePriority & 0x42) != 0 )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800) != 0 )
        {
          v14 = &EventPagingReadRequest;
          goto LABEL_28;
        }
      }
      else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200) != 0 )
      {
        v14 = &EventReadRequest;
LABEL_28:
        LOBYTE(NvCachePriority) = Template_pcxxpc(v3, (_DWORD)v14, (unsigned int)&v20, a1, v2, v3, v19, v11, v4);
      }
    }
  }
  return NvCachePriority;
}
