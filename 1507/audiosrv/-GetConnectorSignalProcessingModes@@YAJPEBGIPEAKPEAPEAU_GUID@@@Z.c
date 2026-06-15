/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18003C6EC
 * Callers:
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18003C558 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetConnectorSignalProcessingModes(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  HRESULT Instance; // esi
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h] BYREF
  LPVOID v12[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+58h] BYREF

  v12[1] = (LPVOID)-2LL;
  v12[0] = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v12);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v12[0] + 40LL))(
                 v12[0],
                 a1,
                 &v11);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 24LL))(
                   v11,
                   &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                   23LL,
                   0LL,
                   &v10);
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 56LL))(v10, a2, &v14);
        if ( Instance >= 0 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                       v14,
                       23LL,
                       &GUID_8a20f514_45de_4ff6_a840_05c590e970e9,
                       &v13);
          if ( Instance >= 0 )
          {
            Instance = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *))(*(_QWORD *)v13 + 24LL))(
                         v13,
                         a4,
                         a3);
            if ( Instance >= 0 )
              Instance = 0;
          }
        }
      }
    }
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return (unsigned int)Instance;
}
