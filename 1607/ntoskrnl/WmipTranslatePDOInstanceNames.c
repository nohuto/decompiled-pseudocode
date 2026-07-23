/*
 * XREFs of WmipTranslatePDOInstanceNames @ 0x1405356DC
 * Callers:
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetDeviceInstanceName @ 0x14012CADC (IoGetDeviceInstanceName.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 */

unsigned int *__fastcall WmipTranslatePDOInstanceNames(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int v5; // r13d
  void *v6; // r10
  unsigned int v7; // r9d
  unsigned int v8; // ebp
  void *v9; // r12
  void *v10; // r15
  _WORD *v11; // r14
  unsigned int v12; // r11d
  unsigned int *v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rdx
  _DWORD *v20; // rsi
  unsigned int v21; // ecx
  int v22; // r14d
  unsigned int v23; // ebx
  wchar_t *Buffer; // rdx
  char *v25; // rdi
  wchar_t *v26; // rdx
  unsigned int *result; // rax
  __int64 v28; // rax
  unsigned int *v29; // rcx
  unsigned __int16 Length; // cx
  unsigned int v31; // esi
  __int64 v32; // rbx
  char *v33; // r14
  char *v34; // r14
  char v35; // [rsp+20h] [rbp-78h]
  char v36; // [rsp+21h] [rbp-77h]
  unsigned int v37; // [rsp+24h] [rbp-74h]
  int v38; // [rsp+28h] [rbp-70h]
  unsigned int v39; // [rsp+2Ch] [rbp-6Ch]
  unsigned int *v40; // [rsp+30h] [rbp-68h]
  void *v41; // [rsp+38h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(unsigned int **)(a1 + 24);
  v5 = 0;
  v6 = 0LL;
  v35 = 0;
  v7 = 0;
  v41 = 0LL;
  v40 = v4;
  v8 = (*(_DWORD *)(a1 + 56) + 1) & 0xFFFFFFFE;
  v38 = 0;
  v9 = 0LL;
  v36 = 1;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v13 = v4;
  v37 = 0;
  do
  {
    v14 = 0;
    v39 = 0;
    if ( v13[4] )
    {
      while ( 1 )
      {
        v15 = 8LL * v14;
        v16 = *(_QWORD *)&v13[v15 + 6] - WmipDataProviderPnpidGuid;
        if ( !v16 )
          v16 = *(_QWORD *)&v13[v15 + 8] - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
        if ( !v16 )
          goto LABEL_41;
        v17 = *(_QWORD *)&v13[v15 + 6] - WmipDataProviderPnPIdInstanceNamesGuid;
        if ( !v17 )
          v17 = *(_QWORD *)&v13[v15 + 8] - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
        if ( !v17 )
        {
LABEL_41:
          v36 = 0;
          if ( v10 )
          {
            ObfDereferenceObject(v10);
            v4 = v40;
            v10 = 0LL;
            v7 = v38;
            v6 = v41;
            v12 = v37;
          }
        }
        v18 = v13[v15 + 10];
        if ( (v18 & 0x20) == 0 )
          goto LABEL_10;
        if ( !v11 )
        {
          v28 = v4[1];
          v29 = v4;
          while ( (_DWORD)v28 )
          {
            v29 = (unsigned int *)((char *)v29 + v28);
            v28 = v29[1];
          }
          v11 = (_WORD *)((char *)v29 + ((*v29 + 1) & 0xFFFFFFFE));
          v5 = a3 + (_DWORD)v4 - (_DWORD)v11;
        }
        v9 = *(void **)&v13[v15 + 12];
        if ( v12 < v13[v15 + 11] )
          v12 = v13[v15 + 11];
        v37 = v12;
        if ( v9 == v6 )
        {
          v13[v15 + 12] = v7;
          v13[v15 + 10] = v18 | 8;
          goto LABEL_28;
        }
        if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, &UnicodeString) >= 0 )
          break;
LABEL_28:
        if ( a2 == 11 )
          ObfDereferenceObject(v9);
LABEL_10:
        v4 = v40;
        ++v14;
        v7 = v38;
        v6 = v41;
        v12 = v37;
        v39 = v14;
        if ( v14 >= v13[4] )
          goto LABEL_11;
      }
      if ( v36 )
      {
        if ( !v10 )
        {
          v10 = v9;
          ObfReferenceObject(v9);
          goto LABEL_37;
        }
        if ( v10 == v9 )
        {
LABEL_37:
          Length = UnicodeString.Length;
          v31 = UnicodeString.Length + 4;
          v8 += v31;
          if ( v35 || v31 > v5 )
          {
            v35 = 1;
          }
          else
          {
            v13[v15 + 10] |= 8u;
            v41 = v9;
            v13[v15 + 12] = (_DWORD)v11 - (_DWORD)v13;
            v32 = Length;
            v38 = (_DWORD)v11 - (_DWORD)v13;
            *v11 = Length + 2;
            v33 = (char *)(v11 + 1);
            memmove(v33, UnicodeString.Buffer, Length);
            v34 = &v33[v32];
            *(_WORD *)v34 = 95;
            v11 = v34 + 2;
            v5 -= v31;
          }
          RtlFreeAnsiString(&UnicodeString);
          v14 = v39;
          goto LABEL_28;
        }
      }
      v36 = 0;
      if ( v10 )
      {
        ObfDereferenceObject(v10);
        v10 = 0LL;
      }
      goto LABEL_37;
    }
LABEL_11:
    v19 = v13[1];
    v6 = 0LL;
    v13 = (unsigned int *)((char *)v13 + v19);
    v41 = 0LL;
  }
  while ( (_DWORD)v19 );
  if ( v36 && v10 )
  {
    if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v9, &UnicodeString) >= 0 )
    {
      v20 = (_DWORD *)(((unsigned __int64)v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v21 = (((_DWORD)v11 + 7) & 0xFFFFFFF8) - (_DWORD)v11;
      v22 = UnicodeString.Length;
      v23 = 2 * UnicodeString.Length + 96;
      v8 += v23 + v21;
      if ( v35 || v23 > v5 - v21 )
      {
        v35 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        ObfReferenceObject(v10);
        *(_QWORD *)(a4 + 24) = v10;
        *(_DWORD *)(a4 + 52) = v37;
        v13[1] = (_DWORD)v20 - (_DWORD)v13;
        memset(v20, 0, 0x58uLL);
        Buffer = UnicodeString.Buffer;
        v20[4] = 2;
        *v20 = v23;
        v20[10] = 40;
        v20[11] = v37;
        v20[12] = 88;
        *(_OWORD *)(v20 + 6) = WmipDataProviderPnpidGuid;
        *((_WORD *)v20 + 44) = v22 + 2;
        v25 = (char *)v20 + 90;
        memmove((char *)v20 + 90, Buffer, (unsigned __int16)v22);
        v26 = UnicodeString.Buffer;
        *(_WORD *)&v25[(unsigned __int16)v22] = 95;
        v20[18] = 4;
        v20[19] = 1;
        v20[20] = v22 + 92;
        *(_OWORD *)(v20 + 14) = WmipDataProviderPnPIdInstanceNamesGuid;
        *(_WORD *)&v25[(unsigned __int16)v22 + 2] = v22;
        memmove((char *)v20 + (unsigned __int16)v22 + 94, v26, (unsigned __int16)v22);
      }
      RtlFreeAnsiString(&UnicodeString);
    }
    ObfDereferenceObject(v10);
  }
  result = v40;
  *v40 = v8;
  if ( v35 )
  {
    *(_QWORD *)(a1 + 56) = 4LL;
  }
  else
  {
    result = (unsigned int *)v8;
    *(_QWORD *)(a1 + 56) = v8;
  }
  return result;
}
