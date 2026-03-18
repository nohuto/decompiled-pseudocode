/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C00C69DC
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00C6E68 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C00C6960 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C00C7BA4 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C00C7C50 (RIMIDEValidateInjectionTime.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(void *a1, __int64 a2, unsigned int *a3)
{
  int v3; // r14d
  __int64 v4; // rbp
  int v5; // r12d
  unsigned int v6; // esi
  PVOID v8; // r15
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r11
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v21; // [rsp+80h] [rbp+18h]
  __int64 v22; // [rsp+88h] [rbp+20h]

  v21 = a3;
  v3 = *(_DWORD *)(a2 + 64);
  v4 = *(_QWORD *)(a2 + 80);
  v5 = 1;
  v6 = 1;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
    return 0LL;
  v8 = Object;
  v9 = (char *)Object + 64;
  if ( !Object )
    v9 = 0LL;
  v10 = *((_QWORD *)Object + 54);
  v11 = *((_QWORD *)v9 + 52);
  v12 = *(_QWORD *)(v10 + 48);
  v13 = *(_DWORD *)(v10 + 28);
  v22 = v12;
  LODWORD(Object) = v13;
  if ( !*(_DWORD *)(v11 + 704) )
  {
    *(_QWORD *)(v10 + 20) = 0LL;
    *(_DWORD *)(v10 + 28) = 0;
    *(_DWORD *)(v10 + 36) = 0;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_DWORD *)(v10 + 56) = 0;
  }
  if ( (!v3 || !v4) && (!*(_DWORD *)(v10 + 20) || !v4) )
  {
    v14 = *(_QWORD *)(v10 + 40);
    if ( !v14 || !v3 )
    {
      if ( v4 || v14 )
      {
        v5 = 0;
        if ( (unsigned int)RIMIDEValidateInjectionQpcCount(
                             v4,
                             v12,
                             *(_QWORD *)(v11 + 888),
                             *(_DWORD *)(v11 + 704) == 0,
                             *(_DWORD *)(v10 + 56)) )
        {
          v19 = (unsigned __int64)(10000 * (v4 - *(_QWORD *)(v10 + 40))) / gliQpcFreq.QuadPart;
          v16 = v19;
          if ( *(_DWORD *)(v11 + 704) )
          {
            if ( (_DWORD)v19 == *(_DWORD *)(v10 + 32) )
              v6 = 0;
            goto LABEL_30;
          }
          *(_QWORD *)(v10 + 40) = v4;
          goto LABEL_27;
        }
      }
      else if ( (unsigned int)RIMIDEValidateInjectionTime(
                                v3,
                                v13,
                                *(_DWORD *)(v11 + 880),
                                *(_DWORD *)(v11 + 704) == 0,
                                *(_DWORD *)(v10 + 36)) )
      {
        v16 = 10 * (v3 - *(_DWORD *)(v10 + 20));
        v17 = RIMIDEGetQpcBasedTouchStackTime(v15);
        if ( *(_DWORD *)(v11 + 704) )
        {
          if ( !v16 )
          {
            v18 = *(_DWORD *)(v10 + 32);
            v16 = v17 - *(_DWORD *)(v10 + 24);
            if ( v16 <= v18 )
            {
              if ( v18 - v16 >= 5 )
                v6 = 0;
              else
                v16 = v18 + 1;
            }
          }
          goto LABEL_30;
        }
        *(_DWORD *)(v10 + 20) = v3;
        *(_DWORD *)(v10 + 24) = v17;
LABEL_27:
        v16 = 0;
LABEL_30:
        *(_DWORD *)(v10 + 32) = v16;
        if ( v5 )
        {
          *(_DWORD *)(v10 + 36) = (_DWORD)Object && !v3;
          *(_DWORD *)(v10 + 28) = v3;
        }
        else
        {
          *(_DWORD *)(v10 + 56) = v22 && !v4;
          *(_QWORD *)(v10 + 48) = v4;
        }
        *v21 = v16;
        goto LABEL_42;
      }
    }
  }
  v6 = 0;
LABEL_42:
  ObfDereferenceObject(v8);
  return v6;
}
