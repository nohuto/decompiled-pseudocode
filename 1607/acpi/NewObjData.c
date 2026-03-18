/*
 * XREFs of NewObjData @ 0x1C0018C10
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     Return @ 0x1C00189D0 (Return.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005A470 (AMLICreateNativeNamespaceObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C005BB00 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005BBEC (AMLICreateOverrideObjectDep.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     HeapInsertFreeList @ 0x1C0019890 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     GetObjectTypeName @ 0x1C005C1C8 (GetObjectTypeName.c)
 */

__int64 __fastcall NewObjData(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbp
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // eax
  int ObjectTypeName; // eax
  int v19; // eax
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 2);
  v3 = 0LL;
  if ( v2 == 4 )
  {
    v5 = *(_DWORD *)(a2 + 24);
    v6 = 0LL;
    v7 = gpheapGlobal;
    v8 = 0LL;
    v9 = v5 + 16;
    if ( v5 + 16 >= v5 )
    {
      if ( v9 < 0x20 )
        v9 = 32;
      if ( v9 + 7 >= v9 )
      {
        v10 = (v9 + 7) & 0xFFFFFFF8;
        byte_1C0074F58 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        if ( v10 <= *(_DWORD *)(v7 + 8) - (int)v7 - 56 )
        {
          v11 = v7;
          v20 = v7;
          while ( 1 )
          {
            v6 = *(_QWORD *)(v11 + 40) - 16LL;
            v12 = *(_QWORD **)(v11 + 40);
            if ( (_QWORD *)(v11 + 40) == v12 )
            {
LABEL_9:
              v6 = 0LL;
            }
            else
            {
              while ( v10 > *(_DWORD *)(v6 + 4) )
              {
                v6 = *v12 - 16LL;
                v12 = (_QWORD *)*v12;
                if ( (_QWORD *)(v11 + 40) == v12 )
                  goto LABEL_9;
              }
            }
            if ( v6 )
              break;
            if ( v10 <= *(_DWORD *)(v11 + 8) - *(_DWORD *)(v11 + 32) )
            {
              v6 = *(_QWORD *)(v11 + 32);
              *(_QWORD *)(v11 + 32) = v6 + v10;
              *(_DWORD *)(v6 + 4) = v10;
              goto LABEL_15;
            }
            v8 = v11;
            v11 = *(_QWORD *)(v11 + 24);
            v20 = v11;
            if ( !v11 )
              goto LABEL_15;
          }
          v14 = *(_QWORD *)(v6 + 16);
          v15 = *(_QWORD **)(v6 + 24);
          if ( *(_QWORD *)(v14 + 8) != v6 + 16 || *v15 != v6 + 16 )
            __fastfail(3u);
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          if ( *(unsigned int *)(v6 + 4) >= (unsigned __int64)v10 + 32 )
          {
            v16 = v6 + v10;
            *(_DWORD *)v16 = 0;
            v17 = *(_DWORD *)(v6 + 4) - v10;
            *(_QWORD *)(v16 + 8) = v11;
            *(_DWORD *)(v16 + 4) = v17;
            *(_DWORD *)(v6 + 4) = v10;
            HeapInsertFreeList(v11);
          }
LABEL_15:
          if ( !v6 )
          {
            if ( v7 == gpheapGlobal )
              v19 = NewGlobalHeap(&v20);
            else
              v19 = NewLocalHeap(&v20);
            if ( v19 )
              goto LABEL_17;
            v11 = v20;
            *(_QWORD *)(v20 + 16) = v7;
            *(_QWORD *)(v8 + 24) = v11;
            v6 = *(_QWORD *)(v11 + 32);
            *(_QWORD *)(v11 + 32) = v6 + v10;
            *(_DWORD *)(v6 + 4) = v10;
          }
          *(_DWORD *)v6 = 1196118088;
          *(_QWORD *)(v6 + 8) = v11;
          memset((void *)(v6 + 16), 0, v10 - 16LL);
        }
LABEL_17:
        KeReleaseSpinLock(&gmutHeap, byte_1C0074F58);
        if ( v6 )
          return v6 + 16;
      }
    }
  }
  else if ( v2 == 3 )
  {
    return HeapAlloc(gpheapGlobal, 1179992648, *(_DWORD *)(a2 + 24));
  }
  else
  {
    switch ( *(_WORD *)(a2 + 2) )
    {
      case 2:
        v3 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(a2 + 24));
        break;
      case 5:
        v3 = HeapAlloc(a1, 1430537800, *(_DWORD *)(a2 + 24));
        break;
      case 7:
        v3 = HeapAlloc(a1, 1314276680, *(_DWORD *)(a2 + 24));
        break;
      case 8:
        v3 = HeapAlloc(a1, 1413827912, *(_DWORD *)(a2 + 24));
        break;
      case 9:
        v3 = HeapAlloc(a1, 1414876488, *(_DWORD *)(a2 + 24));
        break;
      case 0xA:
        v3 = HeapAlloc(a1, 1196576584, *(_DWORD *)(a2 + 24));
        break;
      case 0xB:
        v3 = HeapAlloc(a1, 1397903432, *(_DWORD *)(a2 + 24));
        break;
      case 0xC:
        v3 = HeapAlloc(a1, 1330794568, *(_DWORD *)(a2 + 24));
        break;
      case 0xE:
        v3 = HeapAlloc(a1, 1145455176, *(_DWORD *)(a2 + 24));
        break;
      case 0x82:
        v3 = HeapAlloc(a1, 1179337288, *(_DWORD *)(a2 + 24));
        break;
      case 0x83:
        v3 = HeapAlloc(a1, 1329874504, *(_DWORD *)(a2 + 24));
        break;
      case 0x84:
        v3 = HeapAlloc(a1, 1180191048, *(_DWORD *)(a2 + 24));
        break;
      default:
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(0LL, 3222536195LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
        PrintDebugMessage(112, ObjectTypeName, 0, 0, 0LL);
        break;
    }
  }
  return v3;
}
