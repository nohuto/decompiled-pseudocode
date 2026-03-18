/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIPEBXI@Z @ 0x1C00F9680
 * Callers:
 *     CoreUICallReceive @ 0x1C00F95B0 (CoreUICallReceive.c)
 * Callees:
 *     ?NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C00F9658 (-NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallRece.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C00F9A84 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        unsigned int a5,
        char *a6,
        unsigned int a7)
{
  struct MsgCallState *v9; // r8
  unsigned int v10; // esi
  char *v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // r10
  char *v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rdx
  int v20; // r10d
  unsigned __int8 *v21; // rdx
  int v22; // eax
  unsigned __int8 *v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned __int8 *v27; // rax
  __int64 v28; // r10
  int v29; // ecx
  __int64 v30; // rdx
  __int16 v31; // cx
  __int64 v32; // rcx
  unsigned int v33; // eax
  CoreMessaging::Calling::ReceiveProcessor *v34; // rcx

  if ( !a2 )
    return 2147942487LL;
  if ( !a7 )
    return 0LL;
  if ( !a6 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  *((_QWORD *)this + 16) = a2;
  v9 = (CoreMessaging::Calling::ReceiveProcessor *)((char *)this + 120);
  v10 = 0;
  *((_DWORD *)this + 30) = 0;
  if ( ((a7 + 3) & 0xFFFFFFFC) != a7 )
    goto LABEL_69;
  v11 = &a6[a7];
  *((_BYTE *)this + 112) = 1;
  *((_QWORD *)this + 11) = a6;
  *((_QWORD *)this + 12) = a6;
  if ( v11 < a6 )
  {
    *((_QWORD *)this + 13) = -1LL;
LABEL_69:
    *(_DWORD *)v9 = 102;
    goto LABEL_70;
  }
  *((_QWORD *)this + 13) = v11;
  if ( a7 < 8 )
    goto LABEL_69;
  if ( (unsigned int)((_DWORD)v11 - *((_DWORD *)this + 24)) < 8
    || (*((_QWORD *)this + 12) += 8LL, v12 = *((_QWORD *)this + 12) - 8LL, *((_QWORD *)this + 12) == 8LL) )
  {
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x82uLL);
  }
  if ( *(_DWORD *)v12 > a7 )
    goto LABEL_69;
  v13 = 0;
  v14 = 0LL;
  while ( *(unsigned __int16 *)((char *)&IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces + v14) != *(unsigned __int16 *)(v12 + 4) )
  {
    ++v13;
    v14 += 16LL;
    if ( v13 >= 1 )
      goto LABEL_16;
  }
  v15 = (char *)&IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces + 16 * v13;
  if ( v15 )
  {
    v16 = *(unsigned __int16 *)(v12 + 6);
    if ( (unsigned int)v16 >= *((unsigned __int16 *)v15 + 1) )
    {
      *(_DWORD *)v9 = 104;
      goto LABEL_70;
    }
    *((_QWORD *)this + 17) = v15;
    v17 = *((_QWORD *)v15 + 1);
    v18 = 16 * v16 + v17 == 0;
    v19 = 16 * v16 + v17;
    *((_QWORD *)this + 18) = v19;
    if ( v18 )
    {
      *(_DWORD *)v9 = 201;
      goto LABEL_70;
    }
    v20 = *(unsigned __int8 *)(v19 + 10);
    *((_DWORD *)this + 20) = v20;
    if ( !v20 )
    {
LABEL_50:
      if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) != a7 )
LABEL_51:
        *(_DWORD *)v9 = 106;
      goto LABEL_70;
    }
    *(_QWORD *)this = g_parameters_mCwZY_echToYaLbsOgJV5zVb_jw_IRegistrar;
    v21 = &g_parameters_mCwZY_echToYaLbsOgJV5zVb_jw_IRegistrar[*(unsigned __int16 *)(v19 + 8)];
    *(_QWORD *)this = v21;
    if ( v21 >= byte_1C01021E2 || v21 < g_parameters_mCwZY_echToYaLbsOgJV5zVb_jw_IRegistrar )
    {
LABEL_62:
      *(_DWORD *)v9 = 202;
      goto LABEL_70;
    }
    v22 = *v21;
    v23 = v21 + 1;
    *(_QWORD *)this = v23;
    if ( v22 != v20 )
    {
LABEL_25:
      *(_DWORD *)v9 = 105;
      goto LABEL_70;
    }
    *((_QWORD *)this + 1) = v23;
    *((_DWORD *)this + 31) = 0;
    while ( 1 )
    {
      if ( (unsigned int)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)) < 4 )
        goto LABEL_25;
      *((_QWORD *)this + 12) += 4LL;
      if ( *((_QWORD *)this + 12) == 4LL )
        goto LABEL_25;
      v24 = *(_DWORD *)(*((_QWORD *)this + 12) - 4LL);
      *((_DWORD *)this + 21) = v24;
      if ( v24 > 0xFFFFFFFC )
        goto LABEL_51;
      if ( v24 )
      {
        v25 = (v24 + 3) & 0xFFFFFFFC;
        if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) >= v25 )
        {
          *((_QWORD *)this + 12) += v25;
          v26 = *((_QWORD *)this + 12) - v25;
        }
        else
        {
          v26 = 0LL;
        }
        *((_QWORD *)this + 35) = v26;
        if ( !v26 )
          goto LABEL_69;
      }
      else
      {
        *((_QWORD *)this + 35) = 0LL;
      }
      v27 = (unsigned __int8 *)*((_QWORD *)this + 1);
      v28 = 0LL;
      v29 = *v27;
      *((_QWORD *)this + 1) = v27 + 1;
      if ( v29 <= 9 )
        break;
      switch ( v29 )
      {
        case 10:
          goto LABEL_46;
        case 11:
LABEL_64:
          v28 = 2LL;
          break;
        case 12:
LABEL_63:
          v28 = 1LL;
          break;
        case 13:
          v32 = *((_QWORD *)this + 35);
          if ( v32 )
          {
            v33 = *((_DWORD *)this + 21);
            if ( (v33 & 1) != 0 || *(_WORD *)(v32 + 2LL * (int)((v33 >> 1) - 1)) )
              goto LABEL_62;
          }
          break;
        case 14:
          v30 = v27[1];
          *((_QWORD *)this + 1) = v27 + 2;
          v31 = v27[2];
          *((_QWORD *)this + 1) = v27 + 3;
          v28 = v30 | (unsigned __int16)(v31 << 8);
          break;
        case 15:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
            0x16BuLL);
        case 16:
          CoreMessaging::Calling::FailFast::Error(
            (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
            0x178uLL);
        default:
LABEL_67:
          *(_DWORD *)v9 = 205;
          goto LABEL_70;
      }
LABEL_47:
      if ( v28 != *((_DWORD *)this + 21) && v28 )
        goto LABEL_51;
      *((_QWORD *)this + (unsigned int)(*((_DWORD *)this + 31))++ + 19) = *((_QWORD *)this + 35);
      if ( *((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
        goto LABEL_50;
    }
    switch ( v29 )
    {
      case 9:
        goto LABEL_52;
      case 1:
        goto LABEL_63;
      case 2:
        goto LABEL_64;
      case 3:
        goto LABEL_52;
    }
    if ( v29 != 4 )
    {
      switch ( v29 )
      {
        case 5:
          goto LABEL_63;
        case 6:
          goto LABEL_64;
        case 7:
LABEL_52:
          v28 = 4LL;
          goto LABEL_47;
      }
      if ( v29 != 8 )
        goto LABEL_67;
    }
LABEL_46:
    v28 = 8LL;
    goto LABEL_47;
  }
LABEL_16:
  *(_DWORD *)v9 = 103;
LABEL_70:
  v34 = (CoreMessaging::Calling::ReceiveProcessor *)*(unsigned int *)v9;
  if ( (_DWORD)v34 )
  {
    if ( (unsigned int)((_DWORD)v34 - 100) > 0x63 && (unsigned int)((_DWORD)v34 - 200) > 0x63 )
      CoreMessaging::Calling::FailFast::Error(
        (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
        0x1C6uLL);
    return (unsigned int)CoreMessaging::Calling::ReceiveProcessor::NotifyProtocolViolationHelper(
                           v34,
                           *((struct IMessageCallReceiveHost **)this + 16),
                           v9);
  }
  return v10;
}
