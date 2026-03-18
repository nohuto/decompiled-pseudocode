/*
 * XREFs of NewObjData @ 0x1C0014160
 * Callers:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     Return @ 0x1C0013F20 (Return.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0043380 (AMLICreateNativeNamespaceObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0044954 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0044A40 (AMLICreateOverrideObjectDep.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C0005D90 (NewGlobalHeap.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     HeapInsertFreeList @ 0x1C0013620 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x1C00186B8 (NewLocalHeap.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall NewObjData(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rsi
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // ecx
  __int64 v9; // r14
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  bool v18; // cc
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // eax
  int ObjectTypeName; // eax
  int v23; // eax
  __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 2);
  v3 = 0LL;
  if ( v2 == 4 )
  {
    v5 = *(_DWORD *)(a2 + 24);
    v6 = 0LL;
    v7 = gpheapGlobal;
    v8 = v5 + 16;
    v9 = 0LL;
    if ( v5 + 16 < v5 )
      return v3;
    if ( v8 < 0x20 )
      v8 = 32;
    if ( v8 + 7 < v8 )
      return v3;
    v10 = (v8 + 7) & 0xFFFFFFF8;
    byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    if ( v10 <= *(_DWORD *)(v7 + 8) - (int)v7 - 48 )
    {
      v14 = v7;
      v24 = v7;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 40);
        v6 = 0LL;
        if ( v15 )
        {
          v17 = *(_QWORD *)(v14 + 40);
          while ( 1 )
          {
            v18 = v10 <= *(_DWORD *)(v17 - 12);
            v6 = v17 - 16;
            if ( v10 <= *(_DWORD *)(v17 - 12) )
              break;
            v17 = *(_QWORD *)(v17 + 8);
            if ( v17 == v15 )
            {
              v18 = v10 <= *(_DWORD *)(v6 + 4);
              break;
            }
          }
          if ( !v18 )
            v6 = 0LL;
        }
        if ( v6 )
          break;
        if ( v10 <= *(_DWORD *)(v14 + 8) - *(_DWORD *)(v14 + 32) )
        {
          v6 = *(_QWORD *)(v14 + 32);
          *(_QWORD *)(v14 + 32) = v6 + v10;
          *(_DWORD *)(v6 + 4) = v10;
          goto LABEL_14;
        }
        v9 = v14;
        v14 = *(_QWORD *)(v14 + 24);
        v24 = v14;
        if ( !v14 )
          goto LABEL_14;
      }
      v19 = v6 + 16;
      if ( *(_QWORD *)(v6 + 24) == v6 + 16 )
      {
        *(_QWORD *)(v14 + 40) = 0LL;
      }
      else
      {
        if ( v19 == v15 )
          *(_QWORD *)(v14 + 40) = *(_QWORD *)(v15 + 8);
        **(_QWORD **)(v6 + 24) = *(_QWORD *)(v6 + 16);
        *(_QWORD *)(*(_QWORD *)v19 + 8LL) = *(_QWORD *)(v6 + 24);
      }
      v11 = v10;
      if ( *(unsigned int *)(v6 + 4) >= (unsigned __int64)v10 + 32 )
      {
        v20 = v6 + v10;
        *(_DWORD *)v20 = 0;
        v21 = *(_DWORD *)(v6 + 4) - v10;
        *(_QWORD *)(v20 + 8) = v14;
        *(_DWORD *)(v20 + 4) = v21;
        *(_DWORD *)(v6 + 4) = v10;
        HeapInsertFreeList(v14, v20);
      }
LABEL_14:
      if ( !v6 )
      {
        if ( v7 == gpheapGlobal )
          v23 = NewGlobalHeap(&v24);
        else
          v23 = NewLocalHeap(&v24, v11, v12, v13);
        if ( v23 )
          goto LABEL_16;
        v14 = v24;
        *(_QWORD *)(v24 + 16) = v7;
        *(_QWORD *)(v9 + 24) = v14;
        v6 = *(_QWORD *)(v14 + 32);
        *(_QWORD *)(v14 + 32) = v6 + v10;
        *(_DWORD *)(v6 + 4) = v10;
      }
      *(_DWORD *)v6 = 1196118088;
      *(_QWORD *)(v6 + 8) = v14;
      memset((void *)(v6 + 16), 0, v10 - 16LL);
    }
LABEL_16:
    KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
    if ( v6 )
      return v6 + 16;
    return v3;
  }
  if ( v2 == 3 )
    return HeapAlloc(gpheapGlobal, 1179992648, *(_DWORD *)(a2 + 24));
  switch ( *(_WORD *)(a2 + 2) )
  {
    case 2:
      result = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(a2 + 24));
      break;
    case 5:
      return HeapAlloc(a1, 1430537800, *(_DWORD *)(a2 + 24));
    case 7:
      return HeapAlloc(a1, 1314276680, *(_DWORD *)(a2 + 24));
    case 8:
      return HeapAlloc(a1, 1413827912, *(_DWORD *)(a2 + 24));
    case 9:
      return HeapAlloc(a1, 1414876488, *(_DWORD *)(a2 + 24));
    case 0xA:
      return HeapAlloc(a1, 1196576584, *(_DWORD *)(a2 + 24));
    case 0xB:
      return HeapAlloc(a1, 1397903432, *(_DWORD *)(a2 + 24));
    case 0xC:
      result = HeapAlloc(a1, 1330794568, *(_DWORD *)(a2 + 24));
      break;
    case 0xE:
      result = HeapAlloc(a1, 1145455176, *(_DWORD *)(a2 + 24));
      break;
    case 0x82:
      return HeapAlloc(a1, 1179337288, *(_DWORD *)(a2 + 24));
    case 0x83:
      return HeapAlloc(a1, 1329874504, *(_DWORD *)(a2 + 24));
    case 0x84:
      return HeapAlloc(a1, 1180191048, *(_DWORD *)(a2 + 24));
    default:
      LogError(3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
      return v3;
  }
  return result;
}
