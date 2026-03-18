/*
 * XREFs of WmipQuerySetExecuteSI @ 0x1405014A4
 * Callers:
 *     WmipIoControl @ 0x1403D24BC (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x140501374 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x14051A1D8 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x14065D6B4 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x14065D7BC (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x14065E4D0 (WmipQuerySingleMultiple.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140003910 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     WmipSendWmiIrp @ 0x1403D2A28 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1403D34E8 (WmipForwardWmiIrp.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
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
  __int64 v14; // rcx
  IO_STATUS_BLOCK *p_IoStatus; // r13
  int v16; // eax
  __int64 v18; // r12
  __int64 v19; // r13
  volatile signed __int64 **v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  volatile signed __int64 **v24; // rsi
  __int64 v25; // r15
  char v26; // [rsp+30h] [rbp-C1h] BYREF
  char v27[7]; // [rsp+31h] [rbp-C0h] BYREF
  PVOID P; // [rsp+38h] [rbp-B9h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-B1h] BYREF
  PVOID v30; // [rsp+48h] [rbp-A9h]
  unsigned int *v31; // [rsp+50h] [rbp-A1h]
  __int128 v32; // [rsp+58h] [rbp-99h] BYREF
  _BYTE v33[128]; // [rsp+70h] [rbp-81h] BYREF

  v7 = a7;
  v30 = a1;
  v10 = a1;
  v31 = a7;
  v11 = *((_DWORD *)DesiredAccessForFunction + a4);
  if ( a1 )
  {
    v12 = ObReferenceObjectByPointer(a1, v11, WmipGuidObjectType, a3);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(*(HANDLE *)(a5 + 16), v11, WmipGuidObjectType, a3, &P, 0LL);
    v10 = P;
    v30 = P;
  }
  v13 = v12;
  if ( v12 < 0 )
    return (unsigned int)v13;
  v29 = 16;
  P = v33;
  v13 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v29, (unsigned int)&P, (__int64)&v26, (__int64)v27);
  if ( v13 >= 0 )
  {
    if ( v27[0] )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      a2->IoStatus.Information = 48LL;
    }
    else if ( v26 )
    {
      if ( a4 == 3 || (v13 = -1073741162, a4 == 9) )
        v13 = -1073741161;
      v18 = v29;
      v19 = 0LL;
      v20 = (volatile signed __int64 **)P;
      if ( v29 )
      {
        while ( 1 )
        {
          v21 = (__int64)v20[v19];
          v22 = *(unsigned int *)(v21 + 80);
          *(_DWORD *)(a5 + 4) = v22;
          if ( a2 )
          {
            P = &a2->IoStatus;
            v23 = WmipForwardWmiIrp(a2, a4, v22, (UNICODE_STRING *)(a5 + 24), a6, a5);
          }
          else
          {
            P = &v32;
            LOBYTE(v21) = a4;
            v23 = WmipSendWmiIrp(v21, v22, a5 + 24, a6, a5, &v32);
          }
          if ( v23 >= 0 )
            *v31 = *((_DWORD *)P + 2);
          if ( (unsigned int)(v23 + 1073741163) > 1 )
            break;
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= (unsigned int)v18 )
            goto LABEL_29;
        }
        v13 = v23;
LABEL_29:
        if ( (_DWORD)v18 )
        {
          v24 = v20;
          v25 = v18;
          do
          {
            WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v24++);
            --v25;
          }
          while ( v25 );
        }
      }
      if ( v20 != (volatile signed __int64 **)v33 && v20 )
        ExFreePoolWithTag(v20, 0);
      v10 = v30;
      v7 = v31;
    }
    else
    {
      if ( a2 )
      {
        p_IoStatus = &a2->IoStatus;
        v16 = WmipForwardWmiIrp(a2, a4, *(_DWORD *)(a5 + 4), (UNICODE_STRING *)(a5 + 24), a6, a5);
      }
      else
      {
        p_IoStatus = (IO_STATUS_BLOCK *)&v32;
        LOBYTE(v14) = a4;
        v16 = WmipSendWmiIrp(v14, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, &v32);
      }
      v13 = v16;
      if ( v16 < 0 )
      {
LABEL_14:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_15;
      }
      *a7 = p_IoStatus->Information;
    }
    if ( v13 >= 0 && *v7 > a6 )
      v13 = -1073741811;
    goto LABEL_14;
  }
LABEL_15:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v13;
}
