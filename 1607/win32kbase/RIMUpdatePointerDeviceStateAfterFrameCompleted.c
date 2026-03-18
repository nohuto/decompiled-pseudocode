/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C00DB798
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C000F448 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMRemoveFromActiveDevices @ 0x1C0006A98 (RIMRemoveFromActiveDevices.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C000D35C (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     ListTableIteratorNext @ 0x1C007B5B4 (ListTableIteratorNext.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00D4B8C (RIMUpdatePrimaryDevice.c)
 *     RIMResetPointerDevicePrimaryContact @ 0x1C00DB6BC (RIMResetPointerDevicePrimaryContact.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C00DE840 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 *     RIMCmDeactivateContact @ 0x1C00E1204 (RIMCmDeactivateContact.c)
 */

void *__fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 **v9; // rax
  __int64 *v10; // xmm1_8
  __int64 *v11; // rbx
  __int64 **v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  int v30; // eax
  void *result; // rax
  __int128 v32; // [rsp+20h] [rbp-50h] BYREF
  __int64 v33; // [rsp+30h] [rbp-40h]
  __int128 v34; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-28h]
  __int128 v36; // [rsp+50h] [rbp-20h] BYREF
  __int64 v37; // [rsp+60h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 480);
  v8 = *(_QWORD *)(v4 + 680);
  if ( v8 )
    *(_DWORD *)(v8 + 36) = 0;
  DWORD2(v36) = 0;
  v37 = *(_QWORD *)(v4 + 1552);
  *(_QWORD *)&v36 = v4 + 1552;
  v9 = ListTableIteratorNext((__int64 **)&v32, (__int64)&v36);
  v10 = v9[2];
  v34 = *(_OWORD *)v9;
  v35 = v10;
  while ( 1 )
  {
    DWORD2(v32) = *(_DWORD *)(v4 + 1560);
    v33 = *(_QWORD *)(v4 + 1552) + 16LL * DWORD2(v32);
    *(_QWORD *)&v32 = v4 + 1552;
    v37 = v33;
    v36 = v32;
    result = (void *)tagLIST_TABLE_ITERATOR::operator!=((__int64)&v34, (__int64)&v36);
    if ( !(_BYTE)result )
      break;
    v11 = v35;
    if ( (v35[2] & 2) == 0 )
      __int2c();
    v12 = ListTableIteratorNext((__int64 **)&v32, (__int64)&v34);
    v35 = v12[2];
    v34 = *(_OWORD *)v12;
    if ( !a3 || (v11[288] & 1) == 0 )
      goto LABEL_22;
    v13 = *((_DWORD *)v11 + 651) & 4;
    if ( (*((_DWORD *)v11 + 651) & 4) != 0 || (*((_DWORD *)v11 + 597) & 4) == 0 )
    {
      if ( !(_DWORD)v13 || (*((_DWORD *)v11 + 597) & 4) != 0 )
        goto LABEL_17;
      v16 = -__CFSHR__(*((_DWORD *)v11 + 4), 3);
      v15 = (unsigned int)--*(_DWORD *)(a1 + 596);
      if ( !v16 )
        --*(_DWORD *)(a1 + 600);
    }
    else
    {
      v14 = -__CFSHR__(*((_DWORD *)v11 + 4), 3);
      v15 = (unsigned int)++*(_DWORD *)(a1 + 596);
      if ( !v14 )
        ++*(_DWORD *)(a1 + 600);
    }
    ApiSetDwmAsyncNotifyDigitizerActiveContacts(v13, v15);
LABEL_17:
    if ( (v11[2] & 8) != 0 && (*((_DWORD *)v11 + 651) & 2) != 0 && (*((_DWORD *)v11 + 597) & 2) == 0 )
      RIMResetPointerDevicePrimaryContact(v4);
    v17 = *(_OWORD *)(v11 + 291);
    *((_OWORD *)v11 + 158) = *(_OWORD *)(v11 + 289);
    v18 = *(_OWORD *)(v11 + 293);
    *((_OWORD *)v11 + 159) = v17;
    v19 = *(_OWORD *)(v11 + 295);
    *((_OWORD *)v11 + 160) = v18;
    v20 = *(_OWORD *)(v11 + 297);
    *((_OWORD *)v11 + 161) = v19;
    v21 = *(_OWORD *)(v11 + 299);
    *((_OWORD *)v11 + 162) = v20;
    v22 = *(_OWORD *)(v11 + 301);
    *((_OWORD *)v11 + 163) = v21;
    v23 = *(_OWORD *)(v11 + 303);
    *((_OWORD *)v11 + 164) = v22;
    v24 = *(_OWORD *)(v11 + 305);
    *((_OWORD *)v11 + 165) = v23;
    v25 = *(_OWORD *)(v11 + 307);
    *((_OWORD *)v11 + 166) = v24;
    v26 = *(_OWORD *)(v11 + 309);
    *((_OWORD *)v11 + 167) = v25;
    v27 = *(_OWORD *)(v11 + 311);
    *((_OWORD *)v11 + 168) = v26;
    v28 = *(_OWORD *)(v11 + 313);
    v29 = v11[315];
    *((_OWORD *)v11 + 169) = v27;
    *((_OWORD *)v11 + 170) = v28;
    v11[342] = v29;
LABEL_22:
    if ( a4 )
    {
      *((_DWORD *)v11 + 576) &= 0xFFFFFFF8;
LABEL_29:
      memset(v11 + 289, 0, 0xD8uLL);
    }
    else
    {
      v30 = *((_DWORD *)v11 + 576);
      if ( (v30 & 4) == 0 )
      {
        *((_DWORD *)v11 + 576) = v30 & 0xFFFFFFF8;
        goto LABEL_29;
      }
      if ( (v11[2] & 8) != 0 )
        RIMResetPointerDevicePrimaryContact(v4);
      RIMCmDeactivateContact(v4, v11 - 2);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 608) && !*(_DWORD *)(v4 + 1572) )
      result = (void *)RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 1568) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      return memset((void *)(v4 + 1400), 0, 0x38uLL);
    }
  }
  return result;
}
