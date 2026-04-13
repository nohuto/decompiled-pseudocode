/*
 * XREFs of sub_180009508 @ 0x180009508
 * Callers:
 *     sub_1800091C8 @ 0x1800091C8 (sub_1800091C8.c)
 *     pfns @ 0x180009230 (pfns.c)
 * Callees:
 *     sub_180008C58 @ 0x180008C58 (sub_180008C58.c)
 *     sub_180008D9C @ 0x180008D9C (sub_180008D9C.c)
 *     sub_180009350 @ 0x180009350 (sub_180009350.c)
 *     sub_1800093F8 @ 0x1800093F8 (sub_1800093F8.c)
 *     sub_18000A240 @ 0x18000A240 (sub_18000A240.c)
 *     sub_18000A2E8 @ 0x18000A2E8 (sub_18000A2E8.c)
 *     sub_18000A3BC @ 0x18000A3BC (sub_18000A3BC.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180009508(__int64 a1)
{
  __int64 v2; // rdx
  DWORD v3; // r15d
  int v4; // r12d
  IUnknown *v5; // rbx
  __int64 v6; // rdi
  int *v7; // r13
  void *v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  void *v11; // rcx
  _QWORD *v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  DWORD v16; // eax
  __int64 v17; // rsi
  bool v18; // zf
  DWORD TickCount; // eax
  DWORD v20; // ebx
  void *v21; // rcx
  __int64 v22; // rcx
  DWORD dwTlsIndex; // [rsp+38h] [rbp-39h] BYREF
  __int64 v24; // [rsp+40h] [rbp-31h] BYREF
  __int64 TlsValue; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-21h]
  __int64 v27; // [rsp+58h] [rbp-19h] BYREF
  IUnknown *punk[2]; // [rsp+60h] [rbp-11h] BYREF
  MSG Msg; // [rsp+70h] [rbp-1h] BYREF

  punk[1] = (IUnknown *)-2LL;
  *(_DWORD *)(a1 + 88) = GetCurrentThreadId();
  TlsValue = 0x7FFFFFFFLL;
  v26 = 0LL;
  dwTlsIndex = -1;
  v3 = ::dwTlsIndex;
  if ( ::dwTlsIndex == -1 )
  {
    v4 = sub_18000A3BC(&dwTlsIndex);
    v3 = dwTlsIndex;
  }
  else
  {
    dwTlsIndex = ::dwTlsIndex;
    v4 = 0;
  }
  if ( v4 < 0 )
    goto LABEL_62;
  TlsSetValue(v3, &TlsValue);
  v4 = CoInitializeEx(0LL, *(_DWORD *)(a1 + 80) != 0 ? 2 : 0);
  if ( v4 < 0 )
    goto LABEL_62;
  v27 = 0LL;
  v5 = 0LL;
  punk[0] = 0LL;
  v4 = sub_1800093F8(a1, (LONG *)&TlsValue + 1, &v27);
  v6 = v27;
  if ( v4 >= 0 )
  {
    v26 = v27;
    v7 = (int *)(a1 + 92);
    v4 = sub_1800093F8(a1, (LONG *)(a1 + 92), punk);
    v5 = punk[0];
    if ( v4 >= 0 )
    {
      v4 = SHSetThreadRef(punk[0]);
      if ( v4 >= 0 )
      {
        LODWORD(TlsValue) = (*(_DWORD *)(a1 + 84) | (*(_DWORD *)(a1 + 80) << 24)) + 1;
        *(_DWORD *)(a1 + 48) = 0;
        v8 = *(void **)(a1 + 56);
        if ( v8 )
          SetEvent(v8);
        v9 = *(_QWORD **)(a1 + 64);
        if ( v9 )
        {
          v10 = v9[2];
          if ( v10 )
          {
            v9[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
          operator delete(v9);
        }
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_BYTE *)(a1 + 96) = 0;
        _InterlockedDecrement(&dword_18003AC38);
        while ( 1 )
        {
          while ( !*(_QWORD *)(a1 + 144) )
          {
            v18 = *v7 == 1;
            if ( *v7 > 1 )
            {
              sub_180009350(a1, 0xFFFFFFFF);
              v18 = *v7 == 1;
            }
            if ( v18 && byte_18003A095 )
            {
              TickCount = GetTickCount();
              v20 = TickCount + 30000;
              while ( !*(_QWORD *)(a1 + 144) && TickCount < v20 )
              {
                sub_180009350(a1, v20 - TickCount);
                TickCount = GetTickCount();
              }
            }
            if ( *(_QWORD *)(a1 + 144) )
              break;
            if ( *v7 <= 1 && SHIDWORD(TlsValue) <= 1 && (unsigned __int8)sub_18000A2E8(a1, 0LL) )
            {
              SHSetThreadRef(0LL);
              v26 = 0LL;
              LODWORD(TlsValue) = 0x7FFFFFFF;
              v3 = dwTlsIndex;
              v6 = v27;
              v5 = punk[0];
              goto LABEL_57;
            }
          }
          while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
          {
            *(_BYTE *)(a1 + 96) = 1;
            TranslateMessage(&Msg);
            DispatchMessageW(&Msg);
            *(_BYTE *)(a1 + 96) = 0;
          }
          LODWORD(TlsValue) = (*(_DWORD *)(a1 + 84) | (*(_DWORD *)(a1 + 80) << 24) | 0x800000) + 1;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 24LL))(*(_QWORD *)(a1 + 144));
          LODWORD(TlsValue) = (*(_DWORD *)(a1 + 84) | (*(_DWORD *)(a1 + 80) << 24)) + 1;
          v11 = *(void **)(a1 + 40);
          if ( v11 )
          {
            SetEvent(v11);
            *(_QWORD *)(a1 + 40) = 0LL;
          }
          v12 = 0LL;
          v24 = 0LL;
          AcquireSRWLockExclusive(&SRWLock);
          v13 = *(_QWORD **)(a1 + 24);
          if ( v13 )
          {
            *(_QWORD *)(a1 + 24) = v13[3];
            v13[3] = 0LL;
            if ( *(_QWORD **)(a1 + 32) == v13 )
              *(_QWORD *)(a1 + 32) = 0LL;
          }
          else
          {
            v13 = (_QWORD *)qword_18003AD68;
            if ( !qword_18003AD68 )
              goto LABEL_35;
            qword_18003AD68 = *(_QWORD *)(qword_18003AD68 + 24);
            v13[3] = 0LL;
            v14 = qword_18003AD70;
            if ( (_QWORD *)qword_18003AD70 == v13 )
              v14 = 0LL;
            qword_18003AD70 = v14;
            if ( !v13 )
              goto LABEL_35;
            if ( *((_DWORD *)v13 + 2) != *(_DWORD *)(a1 + 136)
              || *(_DWORD *)v13 != *(_DWORD *)(a1 + 80) && *(_DWORD *)v13 != 3
              || ((*(_BYTE *)(a1 + 84) ^ *((_BYTE *)v13 + 4)) & 9) != 0
              || *(int *)(a1 + 48) < 0 )
            {
              v12 = v13;
              v13 = 0LL;
            }
            if ( !v13 )
            {
LABEL_35:
              *(_BYTE *)(a1 + 97) = 0;
              v15 = *(_QWORD *)(a1 + 144);
              *(_QWORD *)(a1 + 144) = 0LL;
              v24 = v15;
              goto LABEL_39;
            }
          }
          v16 = GetTickCount();
          sub_180008D9C(a1, (__int64)v13, v16, 0LL, &v24);
          v17 = v13[2];
          if ( v17 )
          {
            v13[2] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          operator delete(v13);
          v15 = v24;
LABEL_39:
          ReleaseSRWLockExclusive(&SRWLock);
          if ( v15 )
          {
            v24 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          if ( v12 )
            sub_18000A240(v12);
        }
      }
    }
  }
LABEL_57:
  CoUninitialize();
  if ( v5 )
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 < 0 )
  {
LABEL_62:
    *(_DWORD *)(a1 + 48) = v4;
    v21 = *(void **)(a1 + 56);
    if ( v21 )
      SetEvent(v21);
    v22 = *(_QWORD *)(a1 + 64);
    if ( v22 )
    {
      sub_18000A240(v22);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    _InterlockedDecrement(&dword_18003AC38);
    LOBYTE(v2) = 1;
    sub_18000A2E8(a1, v2);
    sub_180008C58(a1 + 24);
    v3 = dwTlsIndex;
  }
  if ( v3 != -1 )
    TlsSetValue(v3, 0LL);
}
