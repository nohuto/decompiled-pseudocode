/*
 * XREFs of ?MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_KPEAUIMPCInputTarget@@@Z @ 0x180083D14
 * Callers:
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z @ 0x1800851E0 (-CreateMPCTarget@MPCInputRouter@@AEAAXPEAUIInputTarget@@PEAPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180044088 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_CreateMPCTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        struct IMPCInputTarget *a6)
{
  _DWORD *v8; // rcx
  __int64 v9; // rdi
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  const wchar_t *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-89h] BYREF
  struct IInputTarget *v18; // [rsp+40h] [rbp-81h] BYREF
  struct IMPCInputTarget *v19; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-69h] BYREF
  struct IInputTarget **v21; // [rsp+78h] [rbp-49h]
  __int64 v22; // [rsp+80h] [rbp-41h]
  __int64 *v23; // [rsp+88h] [rbp-39h]
  __int64 v24; // [rsp+90h] [rbp-31h]
  int *v25; // [rsp+98h] [rbp-29h]
  __int64 v26; // [rsp+A0h] [rbp-21h]
  const wchar_t *v27; // [rsp+A8h] [rbp-19h]
  int v28; // [rsp+B0h] [rbp-11h]
  int v29; // [rsp+B4h] [rbp-Dh]
  unsigned __int64 *v30; // [rsp+B8h] [rbp-9h]
  __int64 v31; // [rsp+C0h] [rbp-1h]
  struct IMPCInputTarget **v32; // [rsp+C8h] [rbp+7h]
  __int64 v33; // [rsp+D0h] [rbp+Fh]
  int v34; // [rsp+128h] [rbp+67h] BYREF

  v34 = a3;
  v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v8 )
  {
    if ( *v8 )
    {
      v9 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
      {
        v18 = a2;
        v21 = &v18;
        v22 = 8LL;
        LODWORD(v17) = ISMTracing::GetPIDOfTarget(a2);
        v23 = &v17;
        v25 = &v34;
        v24 = 4LL;
        v26 = 4LL;
        if ( a4 )
        {
          v10 = a4 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  v14 = v13 - 1;
                  if ( v14 )
                  {
                    if ( v14 == 1 )
                      v15 = L"Unset";
                    else
                      v15 = (const wchar_t *)&unk_1800AE6CC;
                  }
                  else
                  {
                    v15 = L"Shell";
                  }
                }
                else
                {
                  v15 = L"HologramFrameworkIsolated";
                }
              }
              else
              {
                v15 = L"_HologramFrameworkMaterial";
              }
            }
            else
            {
              v15 = L"HologramFrameworkDefault";
            }
          }
          else
          {
            v15 = L"Exclusive";
          }
        }
        else
        {
          v15 = L"Slate";
        }
        v16 = -1LL;
        do
          ++v16;
        while ( v15[v16] );
        v27 = v15;
        v28 = 2 * v16 + 2;
        v30 = &a5;
        v19 = a6;
        v32 = &v19;
        v29 = 0;
        v31 = 8LL;
        v33 = 8LL;
        TlgWrite((TraceLoggingHProvider)v9, &unk_1800B9E93, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
