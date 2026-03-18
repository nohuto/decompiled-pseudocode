/*
 * XREFs of SfnINCBOXSTRING @ 0x140006720
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1400067DC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 */

__int64 __fastcall SfnINCBOXSTRING(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 (*a6)(void),
        unsigned int a7,
        struct tagSMS *a8)
{
  return _SfnINBOXSTRING(674, a1, a2, a3, a4, a5, a6, a7, a8);
}
