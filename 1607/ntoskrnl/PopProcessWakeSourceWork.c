/*
 * XREFs of PopProcessWakeSourceWork @ 0x14066E360
 * Callers:
 *     PopUpdateWakeSourceWorker @ 0x140205844 (PopUpdateWakeSourceWorker.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     wcsncmp @ 0x14014F600 (wcsncmp.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopFreeWakeSource @ 0x14066E2A4 (PopFreeWakeSource.c)
 *     PopNewWakeSource @ 0x14066E318 (PopNewWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14066E51C (PopWakeSourceGetDeviceProperty.c)
 *     PopWakeSourceIsParent @ 0x14066E5DC (PopWakeSourceIsParent.c)
 */

__int64 __fastcall PopProcessWakeSourceWork(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // r13
  _QWORD *v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // r12d
  _QWORD **v7; // r15
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // edi
  __int64 i; // rax
  unsigned __int16 v13; // ax
  __int64 v14; // rbx
  _DWORD *v15; // rax
  __int64 v16; // rbx
  PVOID PoolWithTag; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  if ( v3 )
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(v5 + 136);
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 24) + 24LL);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( !*((_DWORD *)v9 + 4) )
    {
      v10 = *((_DWORD *)v9 + 18);
      if ( v10 <= v6 )
      {
        if ( v10 < v6 )
        {
          for ( i = *(_QWORD *)(v5 + 16); ; i = *(_QWORD *)(v14 + 16) )
          {
            v14 = 0LL;
            if ( i != IopRootDeviceNode )
              v14 = i;
            if ( !v14 )
              break;
            v13 = *(_WORD *)(v14 + 40);
            if ( v13 == *((_WORD *)v9 + 12)
              && !wcsncmp(*(const wchar_t **)(v14 + 48), (const wchar_t *)v9[4], (unsigned __int64)v13 >> 1) )
            {
              v4 = v9;
              goto LABEL_20;
            }
          }
        }
      }
      else if ( (unsigned __int8)PopWakeSourceIsParent(v5, v9 + 3) )
      {
        v11 = -1073741823;
        goto LABEL_24;
      }
    }
  }
LABEL_20:
  v15 = PopNewWakeSource(0);
  v16 = (__int64)v15;
  if ( !v15 )
  {
    v11 = -1073741670;
    goto LABEL_25;
  }
  v15[18] = v6;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(v5 + 40), 0x206D654Du);
  *(_QWORD *)(v16 + 32) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    PopFreeWakeSource(v16);
LABEL_24:
    v16 = 0LL;
LABEL_25:
    v4 = 0LL;
    goto LABEL_27;
  }
  *(_WORD *)(v16 + 26) = *(_WORD *)(v5 + 40);
  RtlCopyUnicodeString((PUNICODE_STRING)(v16 + 24), (PCUNICODE_STRING)(v5 + 40));
  PopWakeSourceGetDeviceProperty(v16 + 40, 9LL, v3);
  PopWakeSourceGetDeviceProperty(v16 + 56, 0LL, v3);
  v11 = 0;
LABEL_27:
  *a2 = v16;
  *a3 = v4;
  return v11;
}
