/*
 * XREFs of ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x14003A6E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140039520 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     WPP_SF_SD @ 0x14003AB08 (WPP_SF_SD.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x14003D5E8 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x14003D618 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x14003D668 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::SetEventHandle(CCrossProcessBaseClientEndpoint *this, void *a2)
{
  int v2; // ebp
  int v5; // ebx
  HandleSendReceiveClient *v6; // rax
  HandleSendReceiveClient *v7; // rdi
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 102) )
    goto LABEL_2;
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2147024809;
    goto LABEL_36;
  }
  if ( (*((_DWORD *)this + 38) & 0x40000) == 0 || *((_QWORD *)this + 9) == -4LL )
  {
LABEL_2:
    v5 = -2147418113;
  }
  else
  {
    v6 = (HandleSendReceiveClient *)operator new(0x10uLL);
    v7 = v6;
    if ( v6 )
    {
      *((_QWORD *)v6 + 1) = 0LL;
      *(_QWORD *)v6 = &HandleSendReceiveClient::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v5 = HandleSendReceiveClient::Initialize(v7, (unsigned __int16 *)(*((_QWORD *)this + 9) + 4LL));
      v10 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_SD(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v8, v9, *((_QWORD *)this + 9) + 4, v5);
        v10 = *(_QWORD *)&WPP_GLOBAL_Control;
      }
      if ( v5 >= 0 )
      {
        v11 = HandleSendReceiveClient::SendHandle(v7, v8, a2);
        v5 = v11;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x40000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            0xFu,
            (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
            v11);
        }
        if ( v5 == -2147023537 )
          v5 = -2004287484;
        if ( v5 >= 0 )
          *((_DWORD *)this + 102) = 1;
        v12 = HandleSendReceiveClient::CloseConnection(v7);
        v10 = *(_QWORD *)&WPP_GLOBAL_Control;
        v2 = v12;
      }
      if ( v5 == -2147023537 )
      {
        v5 = -2004287484;
      }
      else if ( v5 >= 0 && v2 < 0 )
      {
        v5 = v2;
        if ( (unsigned int *)v10 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(v10 + 28) & 0x80000) != 0
          && *(_BYTE *)(v10 + 25) >= 2u )
        {
          WPP_SF_D(*(_QWORD *)(v10 + 16), 0x10u, (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, v2);
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
    if ( v7 )
      HandleSendReceiveClient::`vector deleting destructor'(v7, 1);
  }
LABEL_36:
  memset_0((void *)(*((_QWORD *)this + 9) + 4LL), 0, 0x80uLL);
  return (unsigned int)v5;
}
