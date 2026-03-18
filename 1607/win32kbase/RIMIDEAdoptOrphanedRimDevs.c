/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C007F528
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMRemoveHoldingFrame @ 0x1C0009D38 (RIMRemoveHoldingFrame.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C00D6E20 (RIMIDEIsCompatibleDevice.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 *v2; // r11
  _QWORD **v3; // rbx
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *result; // rax
  __int64 v10; // rbx
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  bool v21; // zf
  PVOID *v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-20h]

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (__int64 *)gObRimDevList;
  v3 = &v24;
  v24 = &v24;
  v25 = &v24;
  while ( v2 != &gObRimDevList )
  {
    if ( v2 == (__int64 *)16 )
      v4 = 0LL;
    else
      v4 = v2 + 6;
    v5 = v4[44];
    if ( v5
      && *(_BYTE *)(v5 + 73)
      && (v4[23] & 0x800) != 0
      && (v4[25] & 2) == 0
      && (unsigned int)RIMIDEIsCompatibleDevice(Object) )
    {
      v7 = (_QWORD *)(v6 + 136);
      if ( *v3 != &v24 )
        __fastfail(3u);
      *(_QWORD *)(v6 + 144) = v3;
      *v7 = &v24;
      *v3 = v7;
      v25 = (_QWORD *)(v6 + 136);
      *(_DWORD *)(v6 + 200) |= 8u;
      v3 = (_QWORD **)v25;
    }
    v2 = (__int64 *)*v2;
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  v8 = v24;
  for ( result = &v24; v8 != &v24; result = &v24 )
  {
    v10 = (__int64)(v8 - 17);
    v11 = (_QWORD *)v8[27];
    RIMLockExclusive((__int64)(v11 + 12));
    v8 = (_QWORD *)*v8;
    v12 = (_QWORD *)(v10 + 136);
    v13 = *(_QWORD *)(v10 + 136);
    v14 = *(_QWORD **)(v10 + 144);
    if ( *(_QWORD *)(v13 + 8) != v10 + 136 || (_QWORD *)*v14 != v12 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = v11 + 69;
    *(_QWORD *)(v10 + 144) = v10 + 136;
    *v12 = v12;
    while ( *v15 )
    {
      if ( *v15 == v10 )
      {
        *v15 = *(_QWORD *)(v10 + 40);
        break;
      }
      v15 = (_QWORD *)(*v15 + 40LL);
    }
    if ( (*(_DWORD *)(v10 + 184) & 0x80u) != 0 )
    {
      v16 = *(_QWORD *)(v10 + 120);
      v17 = *(_QWORD **)(v10 + 128);
      if ( *(_QWORD *)(v16 + 8) != v10 + 120 || *v17 != v10 + 120 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *(_DWORD *)(v10 + 184) &= ~0x80u;
    }
    if ( *(_DWORD *)(v10 + 316) )
    {
      v18 = (_QWORD *)(*(_QWORD *)(v10 + 480) + 1480LL);
      v19 = *v18;
      v20 = *(_QWORD **)(*(_QWORD *)(v10 + 480) + 1488LL);
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v20 != v18 )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v18[1] = v18;
      *v18 = v18;
    }
    RIMRemoveHoldingFrame((__int64)v11, v10);
    RIMUnlockExclusive((__int64)(v11 + 12));
    ObfDereferenceObject(v11);
    RIMLockExclusive((__int64)(Object + 12));
    ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
    *(_QWORD *)(v10 + 352) = Object;
    *(_QWORD *)(v10 + 40) = Object[69];
    *(_QWORD *)(v10 + 352) = Object;
    v21 = Object[95] == 0LL;
    Object[69] = (PVOID *)v10;
    if ( !v21 )
      *(_DWORD *)(v10 + 184) = *(_DWORD *)(v10 + 184) & 0xFFE07FFF | 0x8000;
    if ( *(_DWORD *)(v10 + 316) )
    {
      v22 = Object[71];
      v23 = (_QWORD *)(*(_QWORD *)(v10 + 480) + 1480LL);
      if ( *v22 != Object + 70 )
        __fastfail(3u);
      *v23 = Object + 70;
      v23[1] = v22;
      *v22 = v23;
      Object[71] = (PVOID *)v23;
    }
    RIMUnlockExclusive((__int64)(Object + 12));
  }
  return result;
}
