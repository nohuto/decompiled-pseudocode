/*
 * XREFs of PiDqIrpQueryCreate @ 0x14048B94C
 * Callers:
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 * Callees:
 *     IoClearActivityIdThread @ 0x140086944 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140086958 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PiDqQuerySerializeActionQueue @ 0x14048BEF8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryUnlock @ 0x14048C1B0 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14048C208 (PiDqQueryLock.c)
 *     PnpIsNullGuid @ 0x14048C8AC (PnpIsNullGuid.c)
 *     PiDqIrpComplete @ 0x14048CCE0 (PiDqIrpComplete.c)
 *     PiDqQueryValidateQueryData @ 0x14048CD48 (PiDqQueryValidateQueryData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x14048CFA8 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 *     PiDqQueryFreeActiveData @ 0x14048D088 (PiDqQueryFreeActiveData.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  char v4; // si
  PVOID v5; // r13
  unsigned int v6; // r12d
  int v7; // eax
  int v8; // eax
  int ValidateQueryData; // edi
  void **v10; // rsi
  unsigned int v11; // r8d
  char v13; // [rsp+31h] [rbp-87h]
  unsigned int v14; // [rsp+34h] [rbp-84h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-80h] BYREF
  __int64 v16; // [rsp+40h] [rbp-78h]
  __int64 v17; // [rsp+48h] [rbp-70h]
  __int64 v18; // [rsp+50h] [rbp-68h]
  __int64 v19; // [rsp+58h] [rbp-60h]
  _QWORD v20[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+70h] [rbp-48h] BYREF

  v19 = a1;
  v2 = *(_QWORD *)(a1 + 184);
  v17 = v2;
  v16 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL);
  v3 = v16;
  v4 = 0;
  v5 = 0LL;
  v18 = 0LL;
  v13 = 0;
  v6 = 0;
  v14 = 0;
  v15 = 0;
  v20[0] = 0LL;
  v20[1] = 0LL;
  if ( v16 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      PiDqQueryLock(v16);
      v7 = *(_DWORD *)(v16 + 216);
      if ( (v7 & 8) != 0 )
      {
        ValidateQueryData = -1073741536;
      }
      else if ( (v7 & 0x10) != 0 || (v8 = v7 | 0x10, *(_DWORD *)(v16 + 216) = v8, v4 = 1, (v8 & 4) != 0) )
      {
        ValidateQueryData = -1073741637;
      }
      else if ( *(_DWORD *)(v2 + 8) < 0x10u )
      {
        ValidateQueryData = -1073741789;
      }
      else
      {
        ValidateQueryData = MesDecodeBufferHandleCreate(*(_QWORD *)(a1 + 24), *(unsigned int *)(v2 + 16), v3 + 16);
        if ( ValidateQueryData >= 0 )
        {
          v10 = (void **)(v3 + 24);
          NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_140257550, &off_1402F32A0, 0, v3 + 24);
          ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
          if ( ValidateQueryData >= 0 )
          {
            if ( !(unsigned __int8)PnpIsNullGuid(*v10) )
            {
              v21 = *(_OWORD *)*v10;
              v5 = IoSetActivityIdThread(&v21);
              v13 = 1;
            }
            PiDqTraceQueryCreate(v3);
            *(_DWORD *)(v3 + 216) |= 4u;
          }
        }
        v4 = 1;
      }
      PiDqQueryUnlock(v3);
      if ( ValidateQueryData >= 0 )
      {
        v11 = *(_DWORD *)(v2 + 8);
        if ( v11 <= 0x10 )
        {
          v6 = 16;
        }
        else
        {
          ValidateQueryData = PiDqQuerySerializeActionQueue(
                                v3,
                                *(_QWORD *)(a1 + 24),
                                v11,
                                (unsigned int)&v14,
                                (__int64)&v15);
          v6 = v14;
        }
      }
    }
    else
    {
      ValidateQueryData = -1073741811;
    }
  }
  else
  {
    ValidateQueryData = -1073741637;
  }
  if ( v4 )
  {
    PiDqQueryLock(v3);
    if ( ValidateQueryData < 0 )
    {
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, *(unsigned int *)(v2 + 8), v15, v20);
    }
    *(_DWORD *)(v3 + 216) &= ~0x10u;
    PiDqQueryUnlock(v3);
  }
  PiDqIrpComplete(a1, (unsigned int)ValidateQueryData, v6, v20);
  if ( v13 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
