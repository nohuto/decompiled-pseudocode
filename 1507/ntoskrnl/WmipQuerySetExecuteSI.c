/*
 * XREFs of WmipQuerySetExecuteSI @ 0x14057AD90
 * Callers:
 *     WmipIoControl @ 0x1404A915C (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x14057AC60 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x14058DB5C (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1406DFF5C (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1406E0064 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x1406E0D78 (WmipQuerySingleMultiple.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 *     WmipSendWmiIrp @ 0x1404D735C (WmipSendWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 */

__int64 __fastcall WmipQuerySetExecuteSI(
        void *a1,
        IRP *a2,
        KPROCESSOR_MODE a3,
        UCHAR a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r12
  PVOID v10; // r14
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // r12
  __int64 v15; // r13
  volatile signed __int64 **v16; // r14
  unsigned int v17; // edx
  int v18; // eax
  volatile signed __int64 **v19; // rsi
  __int64 v20; // r15
  IO_STATUS_BLOCK *p_IoStatus; // r13
  int v23; // eax
  char v24; // [rsp+30h] [rbp-C1h] BYREF
  char v25[7]; // [rsp+31h] [rbp-C0h] BYREF
  PVOID P; // [rsp+38h] [rbp-B9h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-B1h] BYREF
  PVOID v28; // [rsp+48h] [rbp-A9h]
  unsigned int *v29; // [rsp+50h] [rbp-A1h]
  __int128 v30; // [rsp+58h] [rbp-99h] BYREF
  _BYTE v31[128]; // [rsp+70h] [rbp-81h] BYREF

  v7 = a7;
  v28 = a1;
  v10 = a1;
  v29 = a7;
  v11 = *((_DWORD *)DesiredAccessForFunction + a4);
  if ( a1 )
  {
    v12 = ObReferenceObjectByPointer(a1, v11, WmipGuidObjectType, a3);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(*(HANDLE *)(a5 + 16), v11, WmipGuidObjectType, a3, &P, 0LL);
    v10 = P;
    v28 = P;
  }
  v13 = v12;
  if ( v12 < 0 )
    return (unsigned int)v13;
  v27 = 16;
  P = v31;
  v13 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v27, (unsigned int)&P, (__int64)&v24, (__int64)v25);
  if ( v13 >= 0 )
  {
    if ( v25[0] )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      a2->IoStatus.Information = 48LL;
    }
    else if ( v24 )
    {
      if ( a4 == 3 || (v13 = -1073741162, a4 == 9) )
        v13 = -1073741161;
      v14 = v27;
      v15 = 0LL;
      v16 = (volatile signed __int64 **)P;
      if ( v27 )
      {
        while ( 1 )
        {
          v17 = *((_DWORD *)v16[v15] + 20);
          *(_DWORD *)(a5 + 4) = v17;
          if ( a2 )
          {
            P = &a2->IoStatus;
            v18 = WmipForwardWmiIrp(a2, a4, v17, (UNICODE_STRING *)(a5 + 24), a6, a5);
          }
          else
          {
            P = &v30;
            v18 = WmipSendWmiIrp(a4, v17, (UNICODE_STRING *)(a5 + 24), a6, a5, &v30);
          }
          if ( v18 >= 0 )
            *v29 = *((_DWORD *)P + 2);
          if ( (unsigned int)(v18 + 1073741163) > 1 )
            break;
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= (unsigned int)v14 )
            goto LABEL_18;
        }
        v13 = v18;
LABEL_18:
        if ( (_DWORD)v14 )
        {
          v19 = v16;
          v20 = v14;
          do
          {
            WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v19++);
            --v20;
          }
          while ( v20 );
        }
      }
      if ( v16 != (volatile signed __int64 **)v31 && v16 )
        ExFreePoolWithTag(v16, 0);
      v10 = v28;
      v7 = v29;
    }
    else
    {
      if ( a2 )
      {
        p_IoStatus = &a2->IoStatus;
        v23 = WmipForwardWmiIrp(a2, a4, *(_DWORD *)(a5 + 4), (UNICODE_STRING *)(a5 + 24), a6, a5);
      }
      else
      {
        p_IoStatus = (IO_STATUS_BLOCK *)&v30;
        v23 = WmipSendWmiIrp(a4, *(_DWORD *)(a5 + 4), (UNICODE_STRING *)(a5 + 24), a6, a5, &v30);
      }
      v13 = v23;
      if ( v23 < 0 )
      {
LABEL_26:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_27;
      }
      *a7 = p_IoStatus->Information;
    }
    if ( v13 >= 0 && *v7 > a6 )
      v13 = -1073741811;
    goto LABEL_26;
  }
LABEL_27:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v13;
}
