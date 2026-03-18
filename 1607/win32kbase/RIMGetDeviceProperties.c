/*
 * XREFs of RIMGetDeviceProperties @ 0x1C00CED50
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMGetDeviceProperties(void *a1, void *a2, ULONGLONG a3, char a4)
{
  void *v6; // r13
  int v8; // esi
  void *v9; // rbx
  _BYTE *v10; // r14
  int v11; // edx
  char *v12; // rdx
  char v13; // al
  int v14; // r8d
  _DWORD *v15; // rcx
  int *v16; // rcx
  ULONGLONG v17; // rcx
  _DWORD *v18; // rcx
  ULONGLONG v19; // rcx
  void **v20; // rcx
  _DWORD *v21; // rcx
  void **v22; // rcx
  _QWORD *v23; // rcx
  int v25; // [rsp+30h] [rbp-38h]
  PVOID v26; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    116,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v8 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v26);
  v9 = 0LL;
  if ( v8 >= 0 )
  {
    v10 = v26;
    RIMLockExclusive((__int64)v26 + 96);
    if ( v10[73] )
    {
      v8 = -1073741637;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        3,
        117,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      v8 = RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, Object);
      if ( v8 >= 0 )
      {
        if ( Object[0] )
          v12 = (char *)Object[0] + 64;
        else
          v12 = 0LL;
        if ( *((_QWORD *)v12 + 28) )
        {
          v13 = v12[48];
          if ( v13 == 1 )
          {
            v14 = (*((_DWORD *)v12 + 46) >> 12) & 1;
            v25 = v14;
            if ( a4 )
            {
              v15 = (_DWORD *)a3;
              if ( a3 >= W32UserProbeAddress )
                v15 = (_DWORD *)W32UserProbeAddress;
              *v15 = 1;
              v16 = (int *)(a3 + 4);
              if ( a3 + 4 >= W32UserProbeAddress )
                v16 = (int *)W32UserProbeAddress;
              *v16 = v14;
              v17 = a3 + 8;
              if ( a3 + 8 >= W32UserProbeAddress )
                v17 = W32UserProbeAddress;
              *(_OWORD *)v17 = *((_OWORD *)v12 + 29);
              *(_QWORD *)(v17 + 16) = *((_QWORD *)v12 + 60);
              *(_DWORD *)(v17 + 24) = *((_DWORD *)v12 + 122);
            }
            else
            {
              *(_DWORD *)a3 = 1;
              *(_DWORD *)(a3 + 4) = v14;
              *(_OWORD *)(a3 + 8) = *((_OWORD *)v12 + 29);
              *(_QWORD *)(a3 + 24) = *((_QWORD *)v12 + 60);
              *(_DWORD *)(a3 + 32) = *((_DWORD *)v12 + 122);
            }
          }
          else if ( v13 )
          {
            if ( v13 == 2 )
            {
              if ( *((_QWORD *)v12 + 60) )
              {
                if ( a4 )
                {
                  v21 = (_DWORD *)a3;
                  if ( a3 >= W32UserProbeAddress )
                    v21 = (_DWORD *)W32UserProbeAddress;
                  *v21 = 3;
                  v22 = *(void ***)(*((_QWORD *)v12 + 60) + 280LL);
                  if ( v22 )
                    v9 = *v22;
                  Object[1] = v9;
                  v23 = (_QWORD *)(a3 + 8);
                  if ( a3 + 8 >= W32UserProbeAddress )
                    v23 = (_QWORD *)W32UserProbeAddress;
                  *v23 = v9;
                }
                else
                {
                  *(_DWORD *)a3 = 3;
                  v20 = *(void ***)(*((_QWORD *)v12 + 60) + 280LL);
                  if ( v20 )
                    v9 = *v20;
                  *(_QWORD *)(a3 + 8) = v9;
                }
              }
              else
              {
                v8 = -1073741811;
              }
            }
          }
          else if ( a4 )
          {
            v18 = (_DWORD *)a3;
            if ( a3 >= W32UserProbeAddress )
              v18 = (_DWORD *)W32UserProbeAddress;
            *v18 = 2;
            v19 = a3 + 8;
            if ( a3 + 8 >= W32UserProbeAddress )
              v19 = W32UserProbeAddress;
            *(_QWORD *)v19 = *((_QWORD *)v12 + 58);
            *(_DWORD *)(v19 + 8) = *((_DWORD *)v12 + 118);
          }
          else
          {
            *(_DWORD *)a3 = 2;
            *(_QWORD *)(a3 + 8) = *((_QWORD *)v12 + 58);
            *(_DWORD *)(a3 + 16) = *((_DWORD *)v12 + 118);
          }
        }
        else
        {
          v8 = -1073741811;
        }
        ObfDereferenceObject(Object[0]);
      }
    }
    RIMUnlockExclusive((__int64)(v10 + 96));
    ObfDereferenceObject(v10);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x76u,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    v8,
    v25);
  return (unsigned int)v8;
}
